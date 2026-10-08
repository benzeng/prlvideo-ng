
undefined8 FUN_100d17cf0(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
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
  
  (**(code **)(*param_2 + 0x40))(&local_40);
  uVar7 = 0x8117004;
  if (local_40 != (long *)0x0) {
    plVar5 = (long *)local_40[2];
    uVar7 = 0x8117004;
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      while ((uVar4 & 1) != 0) {
        plVar5 = (long *)0x0;
        if (local_40 != (long *)0x0) {
          plVar5 = (long *)local_40[2];
        }
        piVar6 = (int *)(**(code **)(*plVar5 + 0x20))(plVar5);
        if (piVar6 == (int *)0x0) {
          FUN_100df99c0("","VmConfigParser",0,"VBox: Disk element parsing error");
        }
        else {
          plVar5 = *(long **)(piVar6 + 4);
          if (plVar5 == (long *)0x0) {
            FUN_100df99c0("","VmConfigParser",0,"VBox: Disk descriptor parsing error");
          }
          else {
            if ((piVar6[2] | piVar6[1]) < 0) {
              if ((*piVar6 != 1) ||
                 (((((char)param_1[2] == '\0' && (*(char *)((long)param_1 + 0x11) == '\0')) &&
                   (*(char *)((long)param_1 + 0x12) == '\0')) &&
                  (*(char *)((long)param_1 + 0x13) == '\0')))) {
LAB_100d18122:
                FUN_100df99c0("","VmConfigParser",0,"VBox: Disk reserve slot error");
                goto LAB_100d18140;
              }
            }
            else if (*piVar6 == 1) {
              uVar3 = piVar6[2] + piVar6[1] * 2;
              if ((3 < uVar3) || (*(char *)((long)param_1 + (long)(int)uVar3 + 0x10) == '\0'))
              goto LAB_100d18122;
              *(undefined1 *)((long)param_1 + (long)(int)uVar3 + 0x10) = 0;
            }
            FUN_100d1d340(&local_48);
            pcVar1 = *(code **)(*param_1 + 0x30);
            local_50 = local_48;
            if (1 < *(int *)local_48 + 1U) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + 1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
            }
            local_58 = (QArrayData *)QString::fromAscii_helper("type",4);
            (*pcVar1)(param_1,&local_50,&local_58,1,10);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d17ed9;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_100d17ed9:
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d17f09;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_100d17f09:
            pcVar1 = *(code **)(*param_1 + 0x20);
            local_60 = local_48;
            if (1 < *(int *)local_48 + 1U) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + 1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
            }
            local_68 = (QArrayData *)QString::fromAscii_helper("fileName",8);
            (**(code **)(*plVar5 + 0x10))(&local_70,plVar5);
            (*pcVar1)(param_1,&local_60,&local_68,&local_70);
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d17f91;
              }
              QArrayData::deallocate(local_70,2,8);
            }
LAB_100d17f91:
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d17fc1;
              }
              QArrayData::deallocate(local_68,2,8);
            }
LAB_100d17fc1:
            if (*(int *)local_60 != -1) {
              if (*(int *)local_60 != 0) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + -1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d17ff1;
              }
              QArrayData::deallocate(local_60,2,8);
            }
LAB_100d17ff1:
            if (2 < DAT_10230ffd0) {
              QString::toUtf8();
              pQVar8 = local_78 + *(long *)(local_78 + 0x10);
              (**(code **)(*plVar5 + 0x10))(&local_88,plVar5);
              QString::toUtf8();
              FUN_100df99c0("","VmConfigParser",3,"VBox: Add hard disk %s (%s)",pQVar8,
                            local_80 + *(long *)(local_80 + 0x10));
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d18088;
                }
                QArrayData::deallocate(local_80,1,8);
              }
LAB_100d18088:
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d180b8;
                }
                QArrayData::deallocate(local_88,2,8);
              }
LAB_100d180b8:
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d180f0;
                }
                QArrayData::deallocate(local_78,1,8);
              }
            }
LAB_100d180f0:
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d18140;
              }
              QArrayData::deallocate(local_48,2,8);
            }
          }
        }
LAB_100d18140:
        plVar5 = (long *)0x0;
        if (local_40 != (long *)0x0) {
          plVar5 = (long *)local_40[2];
        }
        uVar4 = (**(code **)(*plVar5 + 0x18))();
      }
      uVar7 = 0x8000000;
      if (local_40 == (long *)0x0) {
        return 0x8000000;
      }
    }
    LOCK();
    plVar5 = local_40 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar7;
}

