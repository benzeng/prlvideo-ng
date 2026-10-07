
void FUN_1002f6db0(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_32;
  byte local_31;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0xd4) != 0) {
    do {
      uVar7 = FUN_1007d87f0();
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_1002f6c40(param_1);
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      if (((*(int *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x60) != 0)) ||
         ((lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x40),
          *(int *)(lVar8 + 0xc) != *(int *)(lVar8 + 8) &&
          ((*(int *)(param_1 + 0x38) == 0 && (*(long *)(param_1 + 0x30) + 2000000U < uVar7)))))) {
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          lVar8 = FUN_100661bd0();
          *(long *)(param_1 + 0x28) = lVar8;
          if (lVar8 == 0) {
            iVar6 = *(int *)(param_1 + 0x10);
            goto LAB_1002f6ea0;
          }
          *(undefined4 *)(param_1 + 0x10) = 1;
LAB_1002f6ec0:
          *(ulong *)(param_1 + 0x30) = uVar7;
          *(undefined4 *)(param_1 + 0xd0) = 100;
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          local_58 = *(QArrayData **)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_32 = *(int *)local_58 != 0;
            UNLOCK();
          }
          QString::QString(&local_40,0x7c);
          QString::section(&local_50,&local_58,&local_40,5,5,0);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_32 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1002f6f50;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
LAB_1002f6f50:
          QString::toUtf8();
          iVar6 = FUN_100662040(uVar3,local_48 + *(long *)(local_48 + 0x10),param_1 + 0x69,
                                param_1 + 0xd0);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_32 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1002f6fa8;
            }
            QArrayData::deallocate(local_48,1,8);
          }
LAB_1002f6fa8:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_32 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1002f6fd8;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_1002f6fd8:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_32 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1002f7008;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1002f7008:
          if (1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"PrlPCSCConnect1 res=%d",iVar6);
          }
          if (iVar6 == -1) {
            FUN_1002f6c40(param_1);
          }
          else {
            if (iVar6 == 0) {
              *(undefined4 *)(param_1 + 0x10) = 2;
              bVar5 = *(byte *)(param_1 + 0x68);
              if ((bVar5 & 1) == 0) {
                *(undefined1 *)(param_1 + 0x68) = 3;
                bVar5 = 3;
              }
            }
            else {
              if (1 < *(int *)(param_1 + 0x10)) {
                *(undefined4 *)(param_1 + 0x10) = 1;
              }
              bVar5 = *(byte *)(param_1 + 0x68);
              if ((bVar5 & 1) != 0) {
                *(undefined1 *)(param_1 + 0x68) = 2;
                bVar5 = 2;
              }
            }
            if (1 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"InterruptWake %x",bVar5);
              bVar5 = *(byte *)(param_1 + 0x68);
            }
            if ((bVar5 & 2) != 0) {
              local_32 = 0x50;
              *(byte *)(param_1 + 0x68) = bVar5 & 0xfd;
              local_31 = bVar5;
              FUN_1002f8560(*(undefined8 *)(param_1 + 0x18),&local_32,2);
            }
          }
LAB_1002f70d0:
          if (*(int *)(param_1 + 0x38) != 0) goto LAB_1002f70d6;
        }
        else {
LAB_1002f6ea0:
          if (iVar6 == 0) goto LAB_1002f70d0;
          if ((iVar6 == 1) || (*(int *)(param_1 + 0x38) == 0)) goto LAB_1002f6ec0;
LAB_1002f70d6:
          if (*(long *)(param_1 + 0x60) != 0) {
            FUN_1002f72f0(param_1);
          }
        }
        if (*(int *)(param_1 + 0xd4) == 0) break;
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      QWaitCondition::wait((QMutex *)(param_1 + 0xe0),param_1 + 0xd8);
      *(undefined4 *)(param_1 + 0x14) = 0;
    } while (*(int *)(param_1 + 0xd4) != 0);
  }
  local_60 = (undefined8 *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x454) = 0;
    *(undefined4 *)(lVar8 + 0x468) = 2;
    lVar4 = *(long *)(lVar8 + 0x458);
    if ((1 < DAT_1011c568c) && (*(int *)(lVar8 + 0x450) == 0x69)) {
      FUN_1002da980(2,lVar8);
    }
    uVar2 = *(uint *)(lVar8 + 0x470);
    *(undefined4 *)(lVar8 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar4 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((uVar2 & 4) != 0) {
      FUN_1002c9070(lVar8);
    }
  }
  *(long *)(param_1 + 0x60) = 0;
  FUN_1002f7ae0(*local_60);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_100661c50(*(undefined8 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  QMutex::unlock();
  return;
}

