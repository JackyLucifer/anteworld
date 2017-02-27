#pragma once

#ifndef __INTERGEN_GENERATED__plugin_interface_H__
#define __INTERGEN_GENERATED__plugin_interface_H__

//@file Interface file for plugin_interface interface generated by intergen
//See LICENSE file for copyright and license information

#include <comm/commexception.h>
#include <comm/intergen/ifc.h>


class plugin;



////////////////////////////////////////////////////////////////////////////////
///Interface declaration: [namespace::]name, path
class plugin_interface
    : public intergen_interface
{
public:

    // --- interface methods ---

    
    void set_value( int x );

    int get_value() const;

    // --- creators ---

    ///Interface creator
    static iref<plugin_interface> get() {
        return get<plugin_interface>(0);
    }

    template<class T>
    static iref<T> get( T* _subclass_ );

    // --- internal helpers ---

    static const int HASHID = 1336797586;

    int intergen_hash_id() const override final { return HASHID; }
    
    bool iface_is_derived( int hash ) const override final {
        return hash == HASHID;
    }

    const coid::tokenhash& intergen_interface_name() const override final {
        static const coid::tokenhash _name = "plugin_interface";
        return _name;
    }

    static const coid::token& intergen_default_creator_static( EBackend bck ) {
        static const coid::token _dc("plugin_interface.get@1336797586");
        static const coid::token _djs("js::plugin_interface@wrapper");
        static const coid::token _dnone;

        switch(bck) {
        case IFC_BACKEND_CXX: return _dc;
        case IFC_BACKEND_JS:  return _djs;
        default: return _dnone;
        }
    }


    template<enum EBackend B>
    static void* intergen_wrapper_cache() {
        static void* _cached_wrapper=0;
        if(!_cached_wrapper) {
            const coid::token& tok = intergen_default_creator_static(B);
            _cached_wrapper = coid::interface_register::get_interface_creator(tok);
        }
        return _cached_wrapper;
    }
    
    void* intergen_wrapper( EBackend bck ) const override final {
        switch(bck) {
        case IFC_BACKEND_JS: return intergen_wrapper_cache<IFC_BACKEND_JS>();
        default: return 0;
        }
    }
    
    EBackend intergen_backend() const override { return IFC_BACKEND_CXX; }
    
    const coid::token& intergen_default_creator( EBackend bck ) const override final {
        return intergen_default_creator_static(bck);
    }

protected:

    plugin_interface()
    {}
};

////////////////////////////////////////////////////////////////////////////////
template<class T>
inline iref<T> plugin_interface::get( T* _subclass_ )
{
    typedef iref<T> (*fn_creator)(plugin_interface*);

    static fn_creator create = 0;
    static const coid::token ifckey = "plugin_interface.get@1336797586";

    if(!create)
        create = reinterpret_cast<fn_creator>(
            coid::interface_register::get_interface_creator(ifckey));

    if(!create)
        throw coid::exception("interface creator inaccessible: ") << ifckey;

    return create(_subclass_);
}

#pragma warning(push)
#pragma warning(disable : 4191)

inline void plugin_interface::set_value( int x )
{ return VT_CALL(void,(int),0)(x); }

inline int plugin_interface::get_value() const
{ return VT_CALL(int,() const,1)(); }

#pragma warning(pop)


#endif //__INTERGEN_GENERATED__plugin_interface_H__
