




#TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

#
#
PRJNAMETOOT = FIRSTAISTATETREE
DEFINES += "FIRSTAISTATETREE_API="
DEFINES += "FIRSTAISTATETREE_API(...)="
#
DEFINES += "UCLASS()=FIRSTAISTATETREE_API"
DEFINES += "UCLASS(...)=FIRSTAISTATETREE_API"
#
# this is true during development with unreal-editor...

DEFINES += "WITH_EDITORONLY_DATA=1"

## this project only

##


INCLUDEPATH += ../Intermediate/Build/Win64/UnrealEditor/Inc/$$PRJNAMETOOT/UHT
INCLUDEPATH += $$PRJNAMETOOT/Public $$PRJNAMETOOT/Private
#INCLUDEPATH += ../Plugins/NNEPostProcessing/Source/NNEPostProcessing/Public
# we should follow UE project struct to include files, start from prj.Build.cs folder
#
#  The Thirdparty libs
#
#
#
include(defs.pri)
include(inc.pri)
#
## this project only
# INCLUDEPATH += $$UESRCROOT/Runtime/Renderer/Private
##
#
#

DISTFILES += \
    FirstAIStateTree.Target.cs \
    FirstAIStateTree/FirstAIStateTree.Build.cs \
    FirstAIStateTreeEditor.Target.cs

HEADERS += \
    FirstAIStateTree/FirstAIStateTree.h \
    FirstAIStateTree/FirstAIStateTreeCharacter.h \
    FirstAIStateTree/FirstAIStateTreeGameMode.h \
    FirstAIStateTree/Public/TootPlayerController.h

SOURCES += \
    FirstAIStateTree/FirstAIStateTree.cpp \
    FirstAIStateTree/FirstAIStateTreeCharacter.cpp \
    FirstAIStateTree/FirstAIStateTreeGameMode.cpp \
    FirstAIStateTree/Private/TootPlayerController.cpp
