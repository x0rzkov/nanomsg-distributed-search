
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 3.02
//   File : Messages_reflection.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "Messages_types.h"
#include <bond/core/reflection.h>

namespace Message
{
    //
    // Request
    //
    struct Request::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_keyword_metadata;

        public: struct var
        {
            // keyword
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Request,
                std::string,
                &Request::keyword,
                &s_keyword_metadata
            > keyword;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::keyword>::type fields1;

        public: typedef fields1::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Request", "Message.Request",
                bond::reflection::Attributes()
            );
        }
    };
    

    //
    // Response
    //
    struct Response::Schema
    {
        typedef bond::no_base base;

        static const bond::Metadata metadata;
        
        private: static const bond::Metadata s_matches_metadata;

        public: struct var
        {
            // matches
            typedef bond::reflection::FieldTemplate<
                0,
                bond::reflection::optional_field_modifier,
                Response,
                std::set<std::string>,
                &Response::matches,
                &s_matches_metadata
            > matches;
        };

        private: typedef boost::mpl::list<> fields0;
        private: typedef boost::mpl::push_front<fields0, var::matches>::type fields1;

        public: typedef fields1::type fields;
        
        
        static bond::Metadata GetMetadata()
        {
            return bond::reflection::MetadataInit("Response", "Message.Response",
                bond::reflection::Attributes()
            );
        }
    };
    

    
} // namespace Message
