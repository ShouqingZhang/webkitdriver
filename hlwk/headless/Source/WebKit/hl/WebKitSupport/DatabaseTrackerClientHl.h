/*
 * Copyright (C) 2007 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef DatabaseTrackerClientHl_h
#define DatabaseTrackerClientHl_h

#include "wtf/PassRefPtr.h"

#if ENABLE(DATABASE)

#include "DatabaseTrackerClient.h"
#include "SQLError.h"
#include "SQLResultSet.h"

class WebKitDriver;

namespace WebCore {

class SecurityOrigin;

// We are extendign this class to provide service for asynchronous SQL queries processing
class DatabaseTrackerClientHl : public DatabaseTrackerClient {
public:
    DatabaseTrackerClientHl(WebKitDriver* driver);
    virtual ~DatabaseTrackerClientHl() { }
    virtual void dispatchDidModifyOrigin(SecurityOrigin*) { }
    virtual void dispatchDidModifyDatabase(SecurityOrigin*, const String& databaseName) { }
    // calls for asynchronous data setting and retrieving

    // unlocks main thread, call it when transaction is completed
    void successCallback();
    // Parses SQLResultSet and creates SetRowList and two int fields
    void setResult(SQLResultSet*);
    void setError(SQLError*);
    SQLResultSetRowList* getResult();
    int rowsAffected() { return m_rowsAffected; }
    int insertID() { return m_insertID; };
    SQLError* getError();
    bool isResultOK () { return m_resultIsOK; }

private:
    WebKitDriver* m_driver;
    RefPtr<SQLResultSetRowList> m_result;
    RefPtr<SQLError> m_error;
    bool m_resultIsOK;

    int m_rowsAffected;
    int m_insertID;
};

} // namespace WebCore

#endif

#endif // DatabaseTrackerClientHl_h
