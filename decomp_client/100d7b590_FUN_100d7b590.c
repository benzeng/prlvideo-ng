
void FUN_100d7b590(int param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_68;
  long local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_54 = param_1;
  local_38 = lVar1;
  if (0 < param_1) {
    iVar4 = FUN_100d7a950(param_2);
    if (iVar4 != -1) {
      iVar4 = FUN_100d7b300(param_1);
      local_60 = (long)iVar4;
      local_68 = (long)param_2;
      if (((iVar4 != param_2) && (param_2 != -1)) && (iVar4 != -1)) {
        iVar4 = FUN_100d7ae30(param_2);
        if (iVar4 != 2) {
          uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
          uVar6 = _CFNumberCreate(uVar10,9,&local_54);
          puVar2 = PTR__kCFTypeArrayCallBacks_1021e1958;
          local_40 = uVar6;
          uVar7 = _CFArrayCreate(0,&local_40,1,PTR__kCFTypeArrayCallBacks_1021e1958);
          uVar8 = _CFNumberCreate(uVar10,4,&local_60);
          local_48 = uVar8;
          uVar9 = _CFArrayCreate(0,&local_48,1,puVar2);
          pcVar3 = DAT_102311b28;
          uVar5 = (*DAT_1023119d8)();
          (*pcVar3)(uVar5,uVar7,uVar9);
          _CFRelease(uVar9);
          _CFRelease(uVar8);
          uVar10 = _CFNumberCreate(uVar10,4,&local_68);
          local_50 = uVar10;
          uVar8 = _CFArrayCreate(0,&local_50,1,PTR__kCFTypeArrayCallBacks_1021e1958);
          pcVar3 = DAT_102311b20;
          uVar5 = (*DAT_1023119d8)();
          (*pcVar3)(uVar5,uVar7,uVar8);
          _CFRelease(uVar8);
          _CFRelease(uVar10);
          _CFRelease(uVar7);
          _CFRelease(uVar6);
          puVar2 = PTR__objc_msgSend_1021e1c68;
          uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (*(undefined8 *)PTR__NSApp_1021e1070,
                              PTR_s_windowWithWindowNumber__10226a620,(long)local_54);
          (*(code *)puVar2)(uVar10,PTR_s_makeKeyAndOrderFront__102269e48,uVar10);
        }
      }
    }
  }
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

