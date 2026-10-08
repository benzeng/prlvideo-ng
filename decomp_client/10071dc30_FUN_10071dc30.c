
void FUN_10071dc30(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_10071e5f0();
  cVar2 = FUN_10071f870(param_1);
  if (cVar2 != '\0') {
    local_58 = *(Data **)(param_1 + 0x28);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar5 = (long)*(int *)(local_58 + 8);
        lVar1 = *(long *)(param_1 + 0x28);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_58 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        lVar1 = *(long *)local_50;
        if (lVar1 == 0) {
          FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","d",
                        "ShortcutManager/CKeyActionLogic.cpp",0x133,"updateCustomAppShortcuts");
        }
        else {
          local_60 = (QArrayData *)PTR_shared_null_1021e1288;
          uVar3 = FUN_10071c5d0(param_1,&local_60);
          uVar4 = FUN_10071fac0(param_1,uVar3);
          cVar2 = FUN_100723350(lVar1,lVar1 + 0x30,uVar4);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071dd70;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10071dd70:
          if (cVar2 == '\0') {
            FUN_100df99c0("","prl_client_app",0,
                          "KeyAction for custom application shortcut was not added into hook (already exist or some other reason)."
                         );
          }
        }
        local_50 = local_50 + 8;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_58);
    }
  }
  return;
}

