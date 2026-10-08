
void FUN_1000fbac0(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  QKeySequence local_98 [8];
  QArrayData *local_90;
  uint *local_88;
  QKeySequence local_80 [8];
  long local_78;
  QKeySequence local_70 [8];
  QKeySequence local_68 [8];
  QArrayData *local_60;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_31;
  
  local_48 = 0x100000010;
  local_3c = 0xffffaaaa;
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  lVar3 = *(long *)(param_2 + 0xa0);
  if (*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0xc)) {
    puVar9 = (undefined8 *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8);
    do {
      CIfaceMenu::getAction();
      iVar6 = CIfaceAction::getActionType();
      if (iVar6 == 3) {
        local_40 = *param_3;
        *param_3 = local_40 + 1;
        cVar4 = CIfaceAction::isChecked();
        uVar8 = 0x700;
        if (cVar4 != '\0') {
          uVar8 = 0x720;
        }
        QKeySequence::QKeySequence(local_70);
        CIfaceAction::getShortcuts();
        iVar6 = *(int *)(local_78 + 8);
        iVar2 = *(int *)(local_78 + 0xc);
        FUN_100036370(&local_78);
        if (iVar2 != iVar6) {
          CIfaceAction::getShortcuts();
          if (1 < *local_88) {
            FUN_100036c40(&local_88,local_88[1]);
          }
          QKeySequence::QKeySequence(local_80,local_88 + (long)(int)local_88[2] * 2 + 4,0);
          QKeySequence::operator=(local_70,local_80);
          QKeySequence::~QKeySequence(local_80);
          FUN_100036370(&local_88);
        }
        CIfaceAction::getName();
        uVar5 = CIfaceAction::isEnabled();
        QKeySequence::QKeySequence(local_98,local_70);
        FUN_1000f9b40(param_4,&local_90,&local_48,uVar5,uVar8,iVar1,0,local_98);
        QKeySequence::~QKeySequence(local_98);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000fbe3a;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1000fbe3a:
        QKeySequence::~QKeySequence(local_70);
      }
      else if (iVar6 == 2) {
        local_40 = *param_3;
        cVar4 = CIfaceAction::isChecked();
        CIfaceAction::getName();
        QKeySequence::QKeySequence(local_68);
        uVar7 = 0x310;
        if (cVar4 != '\0') {
          uVar7 = 0x330;
        }
        FUN_1000f9b40(param_4,&local_60,&local_48,1,uVar7,iVar1,0,local_68);
        QKeySequence::~QKeySequence(local_68);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000fbc0a;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1000fbc0a:
        FUN_1000fbac0(param_1,*puVar9,param_3,param_4);
      }
      else if (iVar6 == 1) {
        local_40 = *param_3;
        *param_3 = local_40 + 1;
        CIfaceAction::getName();
        QKeySequence::QKeySequence(local_58);
        FUN_1000f9b40(param_4,&local_50,&local_48,1,0x302,iVar1,0,local_58);
        QKeySequence::~QKeySequence(local_58);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000fbe51;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
LAB_1000fbe51:
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)
                       (*(long *)(param_2 + 0xa0) + 0x10 +
                       (long)*(int *)(*(long *)(param_2 + 0xa0) + 0xc) * 8));
  }
  return;
}

