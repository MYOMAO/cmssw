#ifndef Fireworks_Calo_makeEveJetCone_h
#define Fireworks_Calo_makeEveJetCone_h
// -*- C++ -*-
//
// Package:     Calo
// Class  :     makeEveJetCone
//
/**\class makeEveJetCone makeEveJetCone.h Fireworks/Calo/interface/makeEveJetCone.h

   Description: <one line class summary>

   Usage:
    <usage>

 */
//
// Original Author:  Alja Mrak-Tadel
//         Created:  Thu Oct 22 22:59:29 EST 20q0
//

// system include files

// user include files

// forward declarations
class TEveJetCone;

namespace reco {
   class Jet;
}

namespace fireworks {
   class Context;
   TEveJetCone*  makeEveJetCone(const reco::Jet& iData, const fireworks::Context& context);
}


#endif
