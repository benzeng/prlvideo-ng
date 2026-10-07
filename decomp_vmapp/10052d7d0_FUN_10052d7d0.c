
void FUN_10052d7d0(int param_1,int param_2)

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
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_54 = param_1;
  local_38 = lVar1;
  if (0 < param_1) {
    iVar4 = FUN_10052cb90(param_2);
    if (iVar4 != -1) {
      iVar4 = FUN_10052d540(param_1);
      local_60 = (long)iVar4;
      local_68 = (long)param_2;
      if (((iVar4 != param_2) && (param_2 != -1)) && (iVar4 != -1)) {
        iVar4 = FUN_10052d070(param_2);
        if (iVar4 != 2) {
          uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
          uVar6 = _CFNumberCreate(uVar10,9,&local_54);
          puVar2 = PTR__kCFTypeArrayCallBacks_100ba23f0;
          local_40 = uVar6;
          uVar7 = _CFArrayCreate(0,&local_40,1,PTR__kCFTypeArrayCallBacks_100ba23f0);
          uVar8 = _CFNumberCreate(uVar10,4,&local_60);
          local_48 = uVar8;
          uVar9 = _CFArrayCreate(0,&local_48,1,puVar2);
          pcVar3 = DAT_1011ccd88;
          uVar5 = (*DAT_1011ccc38)();
          (*pcVar3)(uVar5,uVar7,uVar9);
          _CFRelease(uVar9);
          _CFRelease(uVar8);
          uVar10 = _CFNumberCreate(uVar10,4,&local_68);
          local_50 = uVar10;
          uVar8 = _CFArrayCreate(0,&local_50,1,PTR__kCFTypeArrayCallBacks_100ba23f0);
          pcVar3 = DAT_1011ccd80;
          uVar5 = (*DAT_1011ccc38)();
          (*pcVar3)(uVar5,uVar7,uVar8);
          _CFRelease(uVar8);
          _CFRelease(uVar10);
          _CFRelease(uVar7);
          _CFRelease(uVar6);
          puVar2 = PTR__objc_msgSend_100ba25e8;
          uVar10 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (*(undefined8 *)PTR__NSApp_100ba2068,
                              PTR_s_windowWithWindowNumber__100beda80,(long)local_54);
          (*(code *)puVar2)(uVar10,PTR_s_makeKeyAndOrderFront__100beda88,uVar10);
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

