/******************************************************************************
 ** Filename: clusttool.h
 ** Purpose:  Definition of clustering utility tools
 ** Author:   Dan Johnson
 **
 ** (c) Copyright Hewlett-Packard Company, 1988.
 ** Licensed under the Apache License, Version 2.0 (the "License");
 ** you may not use this file except in compliance with the License.
 ** You may obtain a copy of the License at
 ** http://www.apache.org/licenses/LICENSE-2.0
 ** Unless required by applicable law or agreed to in writing, software
 ** distributed under the License is distributed on an "AS IS" BASIS,
 ** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 ** See the License for the specific language governing permissions and
 ** limitations under the License.
 ******************************************************************************/

#ifndef TESSERACT_CLASSIFY_CLUSTTOOL_H_
#define TESSERACT_CLASSIFY_CLUSTTOOL_H_

//--------------------------Include Files---------------------------------------
#include <cstdio>
#include "cluster.h"
#include "host.h"
#include "serialis.h"

/*-------------------------------------------------------------------------
        Public Function Prototype
--------------------------------------------------------------------------*/
uint16_t ReadSampleSize(tesseract::TFile *fp);

PARAM_DESC *ReadParamDesc(tesseract::TFile *fp, uint16_t N);

PROTOTYPE *ReadPrototype(tesseract::TFile *fp, uint16_t N);

float *ReadNFloats(tesseract::TFile *fp, uint16_t N, float Buffer[]);

void WriteParamDesc(FILE *File, uint16_t N, const PARAM_DESC ParamDesc[]);

void WritePrototype(FILE *File, uint16_t N, PROTOTYPE *Proto);

void WriteNFloats (FILE * File, uint16_t N, float Array[]);

void WriteProtoStyle(FILE *File, PROTOSTYLE ProtoStyle);

void WriteProtoList(FILE* File, uint16_t N, PARAM_DESC* ParamDesc,
                    LIST ProtoList, bool WriteSigProtos,
                    bool WriteInsigProtos);

//--------------Global Data Definitions and Declarations---------------------
// define errors that can be trapped
#define ILLEGALSAMPLESIZE 5000
#define ILLEGALCIRCULARSPEC 5001
#define ILLEGALMINMAXSPEC 5002
#define ILLEGALSIGNIFICANCESPEC 5003
#define ILLEGALSTYLESPEC  5004
#define ILLEGALSAMPLECOUNT  5005
#define ILLEGALMEANSPEC 5006
#define ILLEGALVARIANCESPEC 5007
#define ILLEGALDISTRIBUTION 5008
#define ILLEGALFLOAT  5009
#define ILLEGALESSENTIALSPEC  5013

#endif  // TESSERACT_CLASSIFY_CLUSTTOOL_H_
