#pragma once

#ifndef __INTERGEN_GENERATED__other_JS_H__
#define __INTERGEN_GENERATED__other_JS_H__

//@file Javascript interface file for other interface generated by intergen
//See LICENSE file for copyright and license information

#include "other.h"

#include <comm/intergen/ifc.js.h>
#include <comm/token.h>

namespace ns {
namespace js {

class other
{
public:

    //@param scriptpath path to js script to bind to
    static iref<ns::other> create( const script_handle& script, const coid::charstr& str, const coid::token& bindvar = coid::token(), v8::Handle<v8::Context>* ctx=0 )
    {
        typedef iref<ns::other> (*fn_bind)(const script_handle&, const coid::charstr&, const coid::token&, v8::Handle<v8::Context>*);
        static fn_bind binder = 0;
        static const coid::token ifckey = "ns::js::other.create@creator";

        if (!binder)
            binder = reinterpret_cast<fn_bind>(
                coid::interface_register::get_interface_creator(ifckey));

        if (!binder)
            throw coid::exception("interface binder inaccessible: ") << ifckey;

        return binder(script, str, bindvar, ctx);
    }
};

} //namespace js
} //namespace


#endif //__INTERGEN_GENERATED__other_JS_H__
