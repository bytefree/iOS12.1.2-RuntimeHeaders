/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface HalogenLdcmCalc : NSObject {
    double  _adcGain;
    double  _calCurrentNoiseLevel;
    double  _calCurrentSNR;
    double  _calCurrentSignalLevel;
    double  _calVoltageNoiseLevel;
    double  _calVoltageSNR;
    double  _calVoltageSignalLevel;
    double  _capacitanceInNanoF;
    int  _clipDetectWindowSize;
    double  _clippingScore;
    double  _compensatedImpedance;
    double  _compensatedPhase;
    double  _currentGainCorrection;
    double  _currentPhaseCompensation;
    int  _diffWindowSize;
    struct OpaqueFFTSetupD { } * _fftContext;
    double  _goertzelImpedance;
    double  _goertzelPhase;
    double  _hydraImpedance;
    double  _hydraR;
    bool  _isDigitalFilterTrigger;
    double  _isWetCapacitiveThreshNf;
    double  _ldcmAcCap;
    double  _measurementCondetSNR;
    double  _measurementCurrentNoiseLevel;
    double  _measurementCurrentSNR;
    double  _measurementCurrentSignalLevel;
    double  _measurementVoltageNoiseLevel;
    double  _measurementVoltageSNR;
    double  _measurementVoltageSignalLevel;
    double  _movesumClipThreshold;
    int  _nSamples;
    double  _precalCurrentNoiseLevel;
    double  _precalCurrentSNR;
    double  _precalCurrentSignalLevel;
    double  _precalVoltageNoiseLevel;
    double  _precalVoltageSNR;
    double  _precalVoltageSignalLevel;
    double  _resistanceInOhms;
    double  _sampleRate;
    double  _sanitycheckCurrentGainCorrectionLowerbound;
    double  _sanitycheckCurrentGainCorrectionUpperbound;
    double  _sanitycheckCurrentPhaseCompensationLowerbound;
    double  _sanitycheckCurrentPhaseCompensationUpperbound;
    double  _sanitycheckImpedanceLowerbound;
    double  _sanitycheckImpedanceUpperbound;
    double  _sanitycheckPhaseLowerbound;
    double  _sanitycheckPhaseUperbound;
    double  _sanitycheckVoltageGainCorrectionLowerbound;
    double  _sanitycheckVoltageGainCorrectionUpperbound;
    double  _signalFrequency;
    int  _sizeofSample;
    double  _tiaGain;
    NSMutableData * _tmp1DataBuff;
    int  _tmp1DataBuffSize;
    NSMutableData * _tmp2DataBuff;
    int  _tmp2DataBuffSize;
    NSMutableData * _tmp3DataBuff;
    int  _tmp3DataBuffSize;
    double  _voltageGainCorrection;
}

@property double adcGain;
@property (readonly) double calCurrentNoiseLevel;
@property (readonly) double calCurrentSNR;
@property (readonly) double calCurrentSignalLevel;
@property (readonly) double calVoltageNoiseLevel;
@property (readonly) double calVoltageSNR;
@property (readonly) double calVoltageSignalLevel;
@property (readonly) double capacitanceInNanoF;
@property int clipDetectWindowSize;
@property (readonly) double clippingScore;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property int diffWindowSize;
@property struct OpaqueFFTSetupD { }*fftContext;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property double hydraImpedance;
@property double hydraR;
@property bool isDigitalFilterTrigger;
@property double isWetCapacitiveThreshNf;
@property double ldcmAcCap;
@property (readonly) double measurementCondetSNR;
@property (readonly) double measurementCurrentNoiseLevel;
@property (readonly) double measurementCurrentSNR;
@property (readonly) double measurementCurrentSignalLevel;
@property (readonly) double measurementVoltageNoiseLevel;
@property (readonly) double measurementVoltageSNR;
@property (readonly) double measurementVoltageSignalLevel;
@property double movesumClipThreshold;
@property int nSamples;
@property (readonly) double precalCurrentNoiseLevel;
@property (readonly) double precalCurrentSNR;
@property (readonly) double precalCurrentSignalLevel;
@property (readonly) double precalVoltageNoiseLevel;
@property (readonly) double precalVoltageSNR;
@property (readonly) double precalVoltageSignalLevel;
@property (readonly) double resistanceInOhms;
@property double sampleRate;
@property double sanitycheckCurrentGainCorrectionLowerbound;
@property double sanitycheckCurrentGainCorrectionUpperbound;
@property double sanitycheckCurrentPhaseCompensationLowerbound;
@property double sanitycheckCurrentPhaseCompensationUpperbound;
@property double sanitycheckImpedanceLowerbound;
@property double sanitycheckImpedanceUpperbound;
@property double sanitycheckPhaseLowerbound;
@property double sanitycheckPhaseUperbound;
@property double sanitycheckVoltageGainCorrectionLowerbound;
@property double sanitycheckVoltageGainCorrectionUpperbound;
@property double signalFrequency;
@property int sizeofSample;
@property double tiaGain;
@property NSMutableData *tmp1DataBuff;
@property int tmp1DataBuffSize;
@property NSMutableData *tmp2DataBuff;
@property int tmp2DataBuffSize;
@property NSMutableData *tmp3DataBuff;
@property int tmp3DataBuffSize;
@property (readonly) double voltageGainCorrection;

- (bool)_allocBuffers;
- (void)_applyDigitalFilter:(id)arg1;
- (void)_applyFractionalPhaseShift:(id)arg1 withPhaseDelay:(double)arg2;
- (void)_applyGain:(double)arg1 toData:(id)arg2;
- (void)_applyHanningWindow:(id)arg1 withSize:(int)arg2;
- (void)_applyTiaGain:(id)arg1 toCurrentData:(id)arg2;
- (void)_doHydraComp:(double)arg1 withPhase:(double)arg2;
- (void)_freeBuffers;
- (void)_goertzelSecondOrder:(id)arg1 hasFftValue:(double*)arg2 hasPhase:(double*)arg3 withHanning:(bool)arg4;
- (bool)_isClipped:(id)arg1;
- (double)_mean:(double*)arg1 ofSize:(unsigned long long)arg2;
- (double)_median:(double*)arg1 ofSize:(unsigned long long)arg2;
- (void)_rcSolver;
- (void)_reconstructSignal:(id)arg1;
- (double)_sineExtractor:(id)arg1;
- (double)_snr:(id)arg1 withGain:(double)arg2 hasSignalLevel:(double*)arg3 hasNoiseLevel:(double*)arg4 hasCondetSnr:(double*)arg5;
- (double)_stdev:(double*)arg1 ofSize:(unsigned long long)arg2;
- (double)_variance:(double*)arg1 ofSize:(unsigned long long)arg2;
- (double)adcGain;
- (double)calCurrentNoiseLevel;
- (double)calCurrentSNR;
- (double)calCurrentSignalLevel;
- (double)calVoltageNoiseLevel;
- (double)calVoltageSNR;
- (double)calVoltageSignalLevel;
- (double)capacitanceInNanoF;
- (int)clipDetectWindowSize;
- (double)clippingScore;
- (double)compensatedImpedance;
- (double)compensatedPhase;
- (double)currentGainCorrection;
- (double)currentPhaseCompensation;
- (void)dealloc;
- (int)diffWindowSize;
- (int)doCalibration:(id)arg1 withCurrentData:(id)arg2;
- (int)doLiquidDetection:(id)arg1 withCurrentData:(id)arg2 isReceptacleEmpty:(bool)arg3;
- (int)doPreCalibration:(id)arg1 withCurrentData:(id)arg2;
- (struct OpaqueFFTSetupD { }*)fftContext;
- (double)goertzelImpedance;
- (double)goertzelPhase;
- (double)hydraImpedance;
- (double)hydraR;
- (id)initWithSize:(int)arg1;
- (bool)isBoundViolation_currentGainCorrection;
- (bool)isBoundViolation_currentPhaseCompensation;
- (bool)isBoundViolation_measurementCondetSNR;
- (bool)isBoundViolation_voltageGainCorrection;
- (bool)isDigitalFilterTrigger;
- (bool)isLowerBoundViolation_goertzelImpedance;
- (bool)isLowerBoundViolation_goertzelPhase;
- (bool)isUpperBoundViolation_goertzelImpedance;
- (bool)isUpperBoundViolation_goertzelPhase;
- (double)isWetCapacitiveThreshNf;
- (double)ldcmAcCap;
- (double)measurementCondetSNR;
- (double)measurementCurrentNoiseLevel;
- (double)measurementCurrentSNR;
- (double)measurementCurrentSignalLevel;
- (double)measurementVoltageNoiseLevel;
- (double)measurementVoltageSNR;
- (double)measurementVoltageSignalLevel;
- (double)movesumClipThreshold;
- (int)nSamples;
- (double)precalCurrentNoiseLevel;
- (double)precalCurrentSNR;
- (double)precalCurrentSignalLevel;
- (double)precalVoltageNoiseLevel;
- (double)precalVoltageSNR;
- (double)precalVoltageSignalLevel;
- (double)resistanceInOhms;
- (double)sampleRate;
- (double)sanitycheckCurrentGainCorrectionLowerbound;
- (double)sanitycheckCurrentGainCorrectionUpperbound;
- (double)sanitycheckCurrentPhaseCompensationLowerbound;
- (double)sanitycheckCurrentPhaseCompensationUpperbound;
- (double)sanitycheckImpedanceLowerbound;
- (double)sanitycheckImpedanceUpperbound;
- (double)sanitycheckPhaseLowerbound;
- (double)sanitycheckPhaseUperbound;
- (double)sanitycheckVoltageGainCorrectionLowerbound;
- (double)sanitycheckVoltageGainCorrectionUpperbound;
- (void)setAdcGain:(double)arg1;
- (void)setClipDetectWindowSize:(int)arg1;
- (void)setDiffWindowSize:(int)arg1;
- (void)setFftContext:(struct OpaqueFFTSetupD { }*)arg1;
- (void)setHydraImpedance:(double)arg1;
- (void)setHydraR:(double)arg1;
- (void)setIsDigitalFilterTrigger:(bool)arg1;
- (void)setIsWetCapacitiveThreshNf:(double)arg1;
- (void)setLdcmAcCap:(double)arg1;
- (void)setMovesumClipThreshold:(double)arg1;
- (void)setNSamples:(int)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setSanitycheckCurrentGainCorrectionLowerbound:(double)arg1;
- (void)setSanitycheckCurrentGainCorrectionUpperbound:(double)arg1;
- (void)setSanitycheckCurrentPhaseCompensationLowerbound:(double)arg1;
- (void)setSanitycheckCurrentPhaseCompensationUpperbound:(double)arg1;
- (void)setSanitycheckImpedanceLowerbound:(double)arg1;
- (void)setSanitycheckImpedanceUpperbound:(double)arg1;
- (void)setSanitycheckPhaseLowerbound:(double)arg1;
- (void)setSanitycheckPhaseUperbound:(double)arg1;
- (void)setSanitycheckVoltageGainCorrectionLowerbound:(double)arg1;
- (void)setSanitycheckVoltageGainCorrectionUpperbound:(double)arg1;
- (void)setSignalFrequency:(double)arg1;
- (void)setSizeofSample:(int)arg1;
- (void)setTiaGain:(double)arg1;
- (void)setTmp1DataBuff:(id)arg1;
- (void)setTmp1DataBuffSize:(int)arg1;
- (void)setTmp2DataBuff:(id)arg1;
- (void)setTmp2DataBuffSize:(int)arg1;
- (void)setTmp3DataBuff:(id)arg1;
- (void)setTmp3DataBuffSize:(int)arg1;
- (double)signalFrequency;
- (int)sizeofSample;
- (double)tiaGain;
- (id)tmp1DataBuff;
- (int)tmp1DataBuffSize;
- (id)tmp2DataBuff;
- (int)tmp2DataBuffSize;
- (id)tmp3DataBuff;
- (int)tmp3DataBuffSize;
- (double)voltageGainCorrection;

@end