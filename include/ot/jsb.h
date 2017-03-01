#pragma once

#ifndef __INTERGEN_GENERATED__jsb_H__
#define __INTERGEN_GENERATED__jsb_H__

//@file Interface file for jsb interface generated by intergen
//See LICENSE file for copyright and license information

#include <comm/commexception.h>
#include <comm/intergen/ifc.h>

#include <ot/object.h>
#include <ot/geomob.h>
#include <ot/jsb.h>
#include <ot/sndgrp.h>
#include <ot/vehicle_cfg.h>
#include <ot/explosion_params.h>

class jsbsim_plane;


namespace ot {

////////////////////////////////////////////////////////////////////////////////
///
/// JSB INTERFACE //////////////////////////////////////////////////////////
///
///JSBSim interface
class jsb
    : public intergen_interface
{
public:

    // --- interface methods ---

    ///
    double operator()( const char* key ) const;

    void operator()( const char* key, double value );

    // --- creators ---

    ///Internal constructor
    static iref<jsb> _get_jsb( jsbsim_plane* p ) {
        return _get_jsb<jsb>(0, p);
    }

    template<class T>
    static iref<T> _get_jsb( T* _subclass_, jsbsim_plane* p );

    // --- internal helpers ---

    static const int HASHID = 231552727;

    int intergen_hash_id() const override final { return HASHID; }

    bool iface_is_derived( int hash ) const override final {
        return hash == HASHID;
    }

    const coid::tokenhash& intergen_interface_name() const override final {
        static const coid::tokenhash _name = "ot::jsb";
        return _name;
    }

    static const coid::token& intergen_default_creator_static( EBackend bck ) {
        static const coid::token _dc("");
        static const coid::token _djs("ot::js::jsb@wrapper");
        static const coid::token _dlua("ot::lua::jsb@wrapper");
        static const coid::token _dnone;

        switch(bck) {
        case IFC_BACKEND_CXX: return _dc;
        case IFC_BACKEND_JS:  return _djs;
        case IFC_BACKEND_LUA: return _dlua;
        default: return _dnone;
        }
    }


    template<enum EBackend B>
    static void* intergen_wrapper_cache() {
        static void* _cached_wrapper=0;
        if (!_cached_wrapper) {
            const coid::token& tok = intergen_default_creator_static(B);
            _cached_wrapper = coid::interface_register::get_interface_creator(tok);
        }
        return _cached_wrapper;
    }

    void* intergen_wrapper( EBackend bck ) const override final {
        switch(bck) {
        case IFC_BACKEND_JS: return intergen_wrapper_cache<IFC_BACKEND_JS>();
        case IFC_BACKEND_LUA: return intergen_wrapper_cache<IFC_BACKEND_LUA>();
        default: return 0;
        }
    }

    EBackend intergen_backend() const override { return IFC_BACKEND_CXX; }

    const coid::token& intergen_default_creator( EBackend bck ) const override final {
        return intergen_default_creator_static(bck);
    }

protected:

    jsb()
    {}
};

////////////////////////////////////////////////////////////////////////////////
template<class T>
inline iref<T> jsb::_get_jsb( T* _subclass_, jsbsim_plane* p )
{
    typedef iref<T> (*fn_creator)(jsb*, jsbsim_plane*);

    static fn_creator create = 0;
    static const coid::token ifckey = "ot::jsb._get_jsb@231552727";

    if (!create)
        create = reinterpret_cast<fn_creator>(
            coid::interface_register::get_interface_creator(ifckey));

    if (!create)
        throw coid::exception("interface creator inaccessible: ") << ifckey;

    return create(_subclass_, p);
}

#pragma warning(push)
#pragma warning(disable : 4191)

inline double jsb::operator()( const char* key ) const
{ return VT_CALL(double,(const char*) const,0)(key); }

inline void jsb::operator()( const char* key, double value )
{ return VT_CALL(void,(const char*,double),1)(key,value); }

#pragma warning(pop)

} //namespace

#endif //__INTERGEN_GENERATED__jsb_H__
