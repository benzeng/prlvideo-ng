
undefined8 FUN_100d19850(long *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  (**(code **)(*param_2 + 0x50))(&local_40);
  uVar5 = 0x8117006;
  if (local_40 != (long *)0x0) {
    plVar3 = (long *)local_40[2];
    uVar5 = 0x8117006;
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      iVar6 = 0;
      while ((uVar2 & 1) != 0) {
        plVar3 = (long *)0x0;
        if (local_40 != (long *)0x0) {
          plVar3 = (long *)local_40[2];
        }
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 == 0) {
          FUN_100df99c0("","VmConfigParser",0,"VBox: Floppy parse error");
        }
        else if (*(int *)(*(long *)(lVar4 + 8) + 4) == 0) {
          FUN_100df99c0("","VmConfigParser",0,"VBox: Floppy source invalid");
        }
        else {
          local_50 = (QArrayData *)QString::fromAscii_helper("floppy%1",8);
          QString::arg(&local_48,&local_50,(long)iVar6,0,10,0x20);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19953;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_100d19953:
          pcVar1 = *(code **)(*param_1 + 0x20);
          local_58 = local_48;
          if (1 < *(int *)local_48 + 1U) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
          }
          local_60 = (QArrayData *)QString::fromAscii_helper("enabled",7);
          local_68 = (QArrayData *)QString::fromAscii_helper("true",4);
          (*pcVar1)(param_1,&local_58,&local_60,&local_68);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d199e0;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_100d199e0:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19a10;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100d19a10:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19a40;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_100d19a40:
          pcVar1 = *(code **)(*param_1 + 0x20);
          local_70 = local_48;
          if (1 < *(int *)local_48 + 1U) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
          }
          local_78 = (QArrayData *)QString::fromAscii_helper("source",6);
          local_80 = *(QArrayData **)(lVar4 + 8);
          if (1 < *(int *)local_80 + 1U) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + 1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
          }
          (*pcVar1)(param_1,&local_70,&local_78,&local_80);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19ad3;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_100d19ad3:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19b03;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100d19b03:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19b36;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_100d19b36:
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("","VmConfigParser",3,"VBox: Add Floppy %s",
                          local_88 + *(long *)(local_88 + 0x10));
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d19bb0;
              }
              QArrayData::deallocate(local_88,1,8);
            }
          }
LAB_100d19bb0:
          iVar6 = iVar6 + 1;
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d19c2a;
            }
            QArrayData::deallocate(local_48,2,8);
          }
        }
LAB_100d19c2a:
        plVar3 = (long *)0x0;
        if (local_40 != (long *)0x0) {
          plVar3 = (long *)local_40[2];
        }
        uVar2 = (**(code **)(*plVar3 + 0x18))();
      }
      uVar5 = 0x8000000;
      if (local_40 == (long *)0x0) {
        return 0x8000000;
      }
    }
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar5;
}

