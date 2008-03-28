# The following comments couldn't be translated into the new config version:

# requested EBs 

import FWCore.ParameterSet.Config as cms

ecalDigiDisplay = cms.EDFilter("EcalDigiDisplay",
    requestedEbs = cms.untracked.vstring('none'),
    eeDigiCollection = cms.string('eeDigis'),
    # requested FEDs
    requestedFeds = cms.untracked.vint32(-1),
    ebDigiCollection = cms.string('ebDigis'),
    listTowers = cms.untracked.vint32(-1),
    listChannels = cms.untracked.vint32(-1),
    digiProducer = cms.string('ecalEBunpacker'),
    pnDigi = cms.untracked.bool(False),
    listPns = cms.untracked.vint32(-1),
    ttDigi = cms.untracked.bool(False),
    cryDigi = cms.untracked.bool(False),
    mode = cms.untracked.int32(2)
)


