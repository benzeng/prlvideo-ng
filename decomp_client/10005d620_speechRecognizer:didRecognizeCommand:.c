
/* Function Stack Size: 0x20 bytes */

void SpeechRecognizerDelegate::speechRecognizer_didRecognizeCommand_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  QArrayData *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10005db40(param_4,0x16);
  if (cVar1 == '\0') {
    cVar1 = FUN_10005db40(param_4,1);
    uVar3 = 0x35;
    if (cVar1 == '\0') {
      cVar1 = FUN_10005db40(param_4,2);
      uVar3 = 0x2f;
      if (((cVar1 == '\0') && (cVar1 = FUN_10005db40(param_4,4), cVar1 == '\0')) &&
         (cVar1 = FUN_10005db40(param_4,7), cVar1 == '\0')) {
        cVar1 = FUN_10005db40(param_4,3);
        uVar3 = 0x34;
        if (cVar1 == '\0') {
          cVar1 = FUN_10005db40(param_4,5);
          uVar3 = 0x31;
          if (cVar1 == '\0') {
            cVar1 = FUN_10005db40(param_4,6);
            uVar3 = 0x30;
            if (cVar1 == '\0') {
              cVar1 = FUN_10005db40(param_4,9);
              uVar3 = 0x25;
              if ((cVar1 == '\0') && (cVar1 = FUN_10005db40(param_4,0x17), cVar1 == '\0')) {
                cVar1 = FUN_10005db40(param_4,10);
                uVar3 = 0x26;
                if ((cVar1 == '\0') && (cVar1 = FUN_10005db40(param_4,0x18), cVar1 == '\0')) {
                  cVar1 = FUN_10005db40(param_4,0xc);
                  uVar3 = 0x37;
                  if (cVar1 == '\0') {
                    cVar1 = FUN_10005db40(param_4,0xd);
                    uVar3 = 0x29;
                    if (cVar1 == '\0') {
                      cVar1 = FUN_10005db40(param_4,0xe);
                      uVar3 = 0x3e;
                      if (cVar1 == '\0') {
                        cVar1 = FUN_10005db40(param_4,0xf);
                        uVar3 = 0x15;
                        if (cVar1 == '\0') {
                          cVar1 = FUN_10005db40(param_4,0x10);
                          uVar3 = 0x16;
                          if (cVar1 == '\0') {
                            cVar1 = FUN_10005db40(param_4,0x11);
                            uVar3 = 0x1c;
                            if (cVar1 == '\0') {
                              cVar1 = FUN_10005db40(param_4,0x13);
                              uVar3 = 0x12;
                              if (cVar1 == '\0') {
                                cVar1 = FUN_10005db40(param_4,0x14);
                                uVar3 = 0x3b;
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_10005db40(param_4,0x15);
                                  uVar3 = 0x53;
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_10005db40(param_4,0x12);
                                    uVar3 = 0x36;
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_10005db40(param_4,0xb);
                                      uVar3 = 0x27;
                                      if ((cVar1 == '\0') &&
                                         (cVar1 = FUN_10005db40(param_4,0x19), cVar1 == '\0')) {
                                        uVar3 = 0;
                                        FUN_100df99c0("","prl_client_app",0,"Unknown command");
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = FUN_1006915d0();
    uVar6 = FUN_100060bb0();
    uVar6 = FUN_1000609c0(uVar6);
    lVar4 = FUN_100691620(uVar5,uVar3,uVar6);
    if (lVar4 == 0) {
      return;
    }
    cVar1 = QAction::isChecked();
    if (cVar1 != '\0') {
      return;
    }
    QAction::activate(lVar4,0);
    return;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return;
  }
  iVar2 = FUN_10015a6e0(lVar4);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_10015d3a0(lVar4);
  if (iVar2 != 0) {
    uVar3 = FUN_1001d50a0();
    uVar3 = FUN_1001d50d0(uVar3);
    FUN_1001e0340(uVar3);
    return;
  }
  pvVar7 = operator_new(0x100);
  local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_98 = 0;
  local_90 = 0xff;
  local_8c = 0;
  local_88 = 0;
  local_80._8_4_ = (int)PTR_shared_null_1021e1288;
  local_80._0_8_ = PTR_shared_null_1021e1288;
  local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_70._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_70._0_8_ = PTR_shared_null_1021e15e8;
  local_70._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_60 = 0;
  local_58 = PTR_shared_null_1021e1288;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_10025b010(pvVar7,lVar4,0,&local_a0);
  FUN_10005e410(&local_90);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005da36;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10005da36:
  CAbstractTask::execute();
  return;
}

