
bool FUN_100509660(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  char cVar5;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  undefined1 extraout_AL_04;
  undefined1 uVar6;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined1 extraout_AH_04;
  undefined1 extraout_AH_05;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  bool bVar7;
  undefined8 local_98;
  char local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  _FSPathMakeRef(param_2,local_88,&local_89);
  if ((CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)) &
      CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) == 0) {
    if (local_89 == '\0') {
      FUN_1005098f0(param_1);
      lVar3 = CONCAT44(extraout_var_07,
                       CONCAT22(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)));
      if (lVar3 == 0) {
        bVar7 = false;
      }
      else {
        _CFDataGetBytePtr(lVar3);
        _CFDataGetLength(lVar3);
        uVar6 = _PtrToHand(CONCAT44(extraout_var_08,
                                    CONCAT22(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03)
                                            )),&local_98,
                           CONCAT44(extraout_var_09,
                                    CONCAT22(extraout_var_04,CONCAT11(extraout_AH_04,extraout_AL_04)
                                            )));
        bVar7 = CONCAT11(extraout_AH_05,uVar6) == 0;
        if (bVar7) {
          FUN_100509b50(local_88,local_98);
          _DisposeHandle(local_98);
        }
        _CFRelease(lVar3);
      }
    }
    else {
      FUN_1008ef550();
      puVar4 = PTR__objc_msgSend_100ba25e8;
      (*(code *)PTR__objc_msgSend_100ba25e8)
                (PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200);
      uVar2 = *param_1;
      (*(code *)puVar4)(PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                        param_2);
      cVar5 = (*(code *)puVar4)(CONCAT44(extraout_var_05,
                                         CONCAT22(extraout_var_00,
                                                  CONCAT11(extraout_AH_00,extraout_AL_00))),
                                PTR_s_setIcon_forFile_options__100bed8e8,uVar2,
                                CONCAT44(extraout_var_06,
                                         CONCAT22(extraout_var_01,
                                                  CONCAT11(extraout_AH_01,extraout_AL_01))),0);
      bVar7 = cVar5 != '\0';
      FUN_1008ef5a0();
    }
  }
  else {
    bVar7 = false;
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar7;
}

