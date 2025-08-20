    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (combined_mdl_wpanel_P)
        ;%
            section.nData     = 76;
            section.data(76)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_P.sample_period_ms
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_P.dist_noise_Cov
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_P.StreamInput_MaxMissedTicks
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% combined_mdl_wpanel_P.StreamOutput_MaxMissedTicks
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% combined_mdl_wpanel_P.input_chirp_T
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% combined_mdl_wpanel_P.StreamInput_YieldWhenWaiting
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% combined_mdl_wpanel_P.StreamOutput_YieldWhenWaiting
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% combined_mdl_wpanel_P.input_chirp_f1
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% combined_mdl_wpanel_P.input_chirp_f2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% combined_mdl_wpanel_P.dist_noise_seed
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% combined_mdl_wpanel_P.Constant_Value
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% combined_mdl_wpanel_P.Gain_Gain
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% combined_mdl_wpanel_P.Kp_Gain
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% combined_mdl_wpanel_P.Kp1_Gain
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% combined_mdl_wpanel_P.Merge_InitialOutput
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% combined_mdl_wpanel_P.Merge1_InitialOutput
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% combined_mdl_wpanel_P.InitialTankLevelm_Value
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_gainval
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% combined_mdl_wpanel_P.Fluiddensitykgm3_Value
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% combined_mdl_wpanel_P.accelduetogravityms2_Value
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% combined_mdl_wpanel_P.Orificediameter_Value
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% combined_mdl_wpanel_P.Gain_Gain_o
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% combined_mdl_wpanel_P.InitialTankLevelm_Value_n
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_gainval_d
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_UpperSat_c
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% combined_mdl_wpanel_P.DiscreteTimeIntegrator_LowerSat_p
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% combined_mdl_wpanel_P.Fluiddensitykgm3_Value_j
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% combined_mdl_wpanel_P.accelduetogravityms2_Value_b
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% combined_mdl_wpanel_P.Orificediameter_Value_c
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% combined_mdl_wpanel_P.Gain_Gain_f
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% combined_mdl_wpanel_P.BypassDiameter_Value
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% combined_mdl_wpanel_P.Gain1_Gain
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% combined_mdl_wpanel_P.Tankcrosssectionalaream2_Value
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% combined_mdl_wpanel_P.Tankcrosssectionalaream2_Value_k
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% combined_mdl_wpanel_P.Gain_Gain_i
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% combined_mdl_wpanel_P.Constant_Value_e
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% combined_mdl_wpanel_P.input_mode_Value
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% combined_mdl_wpanel_P.input_default_Value
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% combined_mdl_wpanel_P.input_constant_Value
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% combined_mdl_wpanel_P.input_sine_Amp
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% combined_mdl_wpanel_P.input_sine_Bias
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% combined_mdl_wpanel_P.input_sine_Freq
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% combined_mdl_wpanel_P.input_sine_Phase
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% combined_mdl_wpanel_P.input_sine_offset_Value
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% combined_mdl_wpanel_P.input_square_Amp
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% combined_mdl_wpanel_P.input_square_Period
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% combined_mdl_wpanel_P.input_square_Duty
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% combined_mdl_wpanel_P.input_square_PhaseDelay
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% combined_mdl_wpanel_P.input_square_offset_Value
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% combined_mdl_wpanel_P.input_chirp_amplitude_Value
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% combined_mdl_wpanel_P.Gain_Gain_d
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% combined_mdl_wpanel_P.dist_mode_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% combined_mdl_wpanel_P.dist_default_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% combined_mdl_wpanel_P.dist_constant_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% combined_mdl_wpanel_P.dist_sine_Amp
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% combined_mdl_wpanel_P.dist_sine_Bias
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% combined_mdl_wpanel_P.dist_sine_Freq
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% combined_mdl_wpanel_P.dist_sine_Phase
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% combined_mdl_wpanel_P.dist_sine_offset_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% combined_mdl_wpanel_P.dist_square_Amp
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% combined_mdl_wpanel_P.dist_square_Period
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% combined_mdl_wpanel_P.dist_square_Duty
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% combined_mdl_wpanel_P.dist_square_PhaseDelay
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% combined_mdl_wpanel_P.dist_square_offset_Value
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% combined_mdl_wpanel_P.WhiteNoise_Mean
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% combined_mdl_wpanel_P.WhiteNoise_StdDev
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% combined_mdl_wpanel_P.Merge_1_InitialOutput
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% combined_mdl_wpanel_P.Merge_2_InitialOutput
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% combined_mdl_wpanel_P.Merge_3_InitialOutput
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% combined_mdl_wpanel_P.Merge_4_InitialOutput
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% combined_mdl_wpanel_P.Merge_5_InitialOutput
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% combined_mdl_wpanel_P.Merge_6_InitialOutput
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% combined_mdl_wpanel_P.Merge_7_InitialOutput
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% combined_mdl_wpanel_P.Merge_InitialOutput_j
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_P.MissedTicks_Y0
                    section.data(1).logicalSrcIdx = 76;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_P.PlantConfiguration_Value
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_P.SimulinkModelConfiguration_Value
                    section.data(2).logicalSrcIdx = 78;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_P.PlantConfiguration_Value_k
                    section.data(3).logicalSrcIdx = 79;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_P.Case2_f.Constant_Value
                    section.data(1).logicalSrcIdx = 80;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_P.Case1_f.Constant_Value
                    section.data(1).logicalSrcIdx = 81;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (combined_mdl_wpanel_B)
        ;%
            section.nData     = 29;
            section.data(29)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_B.Sum2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_B.Gain
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_B.MultiportSwitch
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% combined_mdl_wpanel_B.Sum2_p
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% combined_mdl_wpanel_B.Output
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% combined_mdl_wpanel_B.MultiportSwitch_b
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% combined_mdl_wpanel_B.PumpCurrentA
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% combined_mdl_wpanel_B.Out1FlowLmin
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% combined_mdl_wpanel_B.Out2FlowLmin
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% combined_mdl_wpanel_B.Tank1Levelm
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% combined_mdl_wpanel_B.Tank1OutletFlowLmin
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% combined_mdl_wpanel_B.Tank2Levelm
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% combined_mdl_wpanel_B.Tank2OutletFlowLmin
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% combined_mdl_wpanel_B.Merge
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% combined_mdl_wpanel_B.TmpBufferAtConstantOutport1
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% combined_mdl_wpanel_B.Kp1
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% combined_mdl_wpanel_B.Merge_e
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% combined_mdl_wpanel_B.Merge1
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% combined_mdl_wpanel_B.InitialTankLevelm
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% combined_mdl_wpanel_B.DiscreteTimeIntegrator
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% combined_mdl_wpanel_B.Sqrt
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% combined_mdl_wpanel_B.Gain_l
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% combined_mdl_wpanel_B.Product2
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% combined_mdl_wpanel_B.InitialTankLevelm_h
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% combined_mdl_wpanel_B.DiscreteTimeIntegrator_k
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% combined_mdl_wpanel_B.Gain_a
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% combined_mdl_wpanel_B.Product2_j
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% combined_mdl_wpanel_B.dVtodL
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% combined_mdl_wpanel_B.dVtodL_g
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_B.StreamInput_o2
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_B.StreamInput_o1
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 3;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (combined_mdl_wpanel_DW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_DW.DiscreteTimeIntegrator_DSTATE_j
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_DW.NextOutput
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_DW.Scope1_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_DW.TAQSigLogging_InsertedFor_Controller_at_outport_0_PWORK.AQHandles
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

                    ;% combined_mdl_wpanel_DW.TAQSigLogging_InsertedFor_Disturbance_at_outport_0_PWORK.AQHandles
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 3;

                    ;% combined_mdl_wpanel_DW.TAQSigLogging_InsertedFor_PlantCoupledTanks_at_outport_0_PWORK.AQHandles
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 4;

                    ;% combined_mdl_wpanel_DW.TAQSigLogging_InsertedFor_PlantCoupledTanks_at_outport_1_1_PWORK.AQHandles
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 5;

                    ;% combined_mdl_wpanel_DW.TAQSigLogging_InsertedFor_ReferenceSignal_at_outport_0_PWORK.AQHandles
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 12;

                    ;% combined_mdl_wpanel_DW.StreamInput_PWORK
                    section.data(8).logicalSrcIdx = 10;
                    section.data(8).dtTransOffset = 13;

                    ;% combined_mdl_wpanel_DW.StreamOutput_PWORK
                    section.data(9).logicalSrcIdx = 11;
                    section.data(9).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.clockTickCounter
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_DW.clockTickCounter_e
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.RandSeed
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.SwitchCase_ActiveSubsystem
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% combined_mdl_wpanel_DW.CoupledTanks_SubsysRanBC
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

                    ;% combined_mdl_wpanel_DW.CoupledTanksModel_SubsysRanBC
                    section.data(3).logicalSrcIdx = 17;
                    section.data(3).dtTransOffset = 2;

                    ;% combined_mdl_wpanel_DW.Case4_SubsysRanBC
                    section.data(4).logicalSrcIdx = 18;
                    section.data(4).dtTransOffset = 3;

                    ;% combined_mdl_wpanel_DW.Case3_SubsysRanBC
                    section.data(5).logicalSrcIdx = 19;
                    section.data(5).dtTransOffset = 4;

                    ;% combined_mdl_wpanel_DW.Case1_SubsysRanBC
                    section.data(6).logicalSrcIdx = 20;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Case2_f.Case1_SubsysRanBC
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Case1_f.Case1_SubsysRanBC
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Case4.Case2_SubsysRanBC
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Case3.Case2_SubsysRanBC
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% combined_mdl_wpanel_DW.Case2.Case2_SubsysRanBC
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 580702543;
    targMap.checksum1 = 3115436072;
    targMap.checksum2 = 1001837882;
    targMap.checksum3 = 1357627866;

