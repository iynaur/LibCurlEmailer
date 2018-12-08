//
//  main.cpp
//  Email_test_project
//
//  Created by Richard Bradshaw on 30/05/2017.
//  Copyright © 2017 Richard Bradshaw. All rights reserved.
//  Ignore the copyright do what you like with this code
//

#include <iostream>
#include "SMTPCompiler.hpp"

using namespace std;

/**
 * Example code for creating and sending an email with 2 pdf attachments
 * You can send as many attachments as you like just add the file names to the vector<string>
 */

int main(int argc, const char * argv[]) {
    
    SMTPCompiler s;
    string from = "iynaur87@sina.com";
    s.setFrom(from);
    string to = "ruanyi@seizet.com";
    string cc = "310391890@qq.com";
    vector<string> recipients;
    recipients.push_back(to);
    recipients.push_back(cc);
    s.setDestinations(recipients);
    string server = "smtp.sina.com:25";
    s.setServer(server);
    string username = from;
    s.setUsername(username);
    string pwd;
    cin>>pwd;
    s.setPassword(pwd);
    string subject = "The subject text goes here";
    s.setSubject(subject);
    
    
    string body = "this is the body text blah blah blah";
    s.setBodyText(body);
    
    string bodyContent = "application/pdf";
    s.setBodyContentType(bodyContent);
    string bodyEncoding = "base64";
    s.setBodyEncoding(bodyEncoding);
    
    vector<string> attachments;
    string attachment = "Makefile";
    string attachment2 = "test.txt";
    attachments.push_back(attachment);
    //attachments.push_back(attachment2);
    s.setAttachmentList(attachments);
 
    s.send();
    //s.print();
    
    return 0;
}
