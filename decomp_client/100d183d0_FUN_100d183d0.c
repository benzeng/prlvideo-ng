
undefined8 FUN_100d183d0(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
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
  
  (**(code **)(*param_2 + 0x48))(&local_40);
  if (local_40 == (long *)0x0) {
    return 0x8117004;
  }
  uVar8 = 0x8117004;
  if ((long *)local_40[2] == (long *)0x0) goto LAB_100d18a76;
  uVar4 = (**(code **)(*(long *)local_40[2] + 0x10))();
  iVar7 = 0;
  while ((uVar4 & 1) != 0) {
    plVar6 = (long *)0x0;
    if (local_40 != (long *)0x0) {
      plVar6 = (long *)local_40[2];
    }
    piVar5 = (int *)(**(code **)(*plVar6 + 0x20))();
    if (piVar5 == (int *)0x0) {
      FUN_100df99c0("","VmConfigParser",0);
    }
    else {
      if ((piVar5[2] | piVar5[1]) < 0) {
        if ((*piVar5 != 1) ||
           (((((char)param_1[2] == '\0' && (*(char *)((long)param_1 + 0x11) == '\0')) &&
             (*(char *)((long)param_1 + 0x12) == '\0')) && (*(char *)((long)param_1 + 0x13) == '\0')
            ))) {
LAB_100d18780:
          FUN_100df99c0("","VmConfigParser",0);
          goto LAB_100d1879a;
        }
      }
      else if (*piVar5 == 1) {
        uVar3 = piVar5[2] + piVar5[1] * 2;
        if ((3 < uVar3) || (*(char *)((long)param_1 + (long)(int)uVar3 + 0x10) == '\0'))
        goto LAB_100d18780;
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
      (*pcVar1)(param_1,&local_50,&local_58,2,10);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1858d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100d1858d:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d185bd;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100d185bd:
      if (*(int *)(*(long *)(piVar5 + 4) + 4) != 0) {
        pcVar1 = *(code **)(*param_1 + 0x20);
        local_60 = local_48;
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        local_68 = (QArrayData *)QString::fromAscii_helper("fileName",8);
        local_70 = *(QArrayData **)(piVar5 + 4);
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        (*pcVar1)(param_1,&local_60,&local_68);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d18660;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_100d18660:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d18690;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100d18690:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d186c3;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_100d186c3:
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","VmConfigParser",3,"VBox: Add CD/DVD %s",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d18740;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
LAB_100d18740:
      iVar7 = iVar7 + 1;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d1879a;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_100d1879a:
    plVar6 = (long *)0x0;
    if (local_40 != (long *)0x0) {
      plVar6 = (long *)local_40[2];
    }
    uVar4 = (**(code **)(*plVar6 + 0x18))();
  }
  uVar8 = 0x8000000;
  if (iVar7 != 0) goto LAB_100d18a76;
  uVar3 = 0;
  if ((((char)param_1[2] != '\0') || (uVar3 = 1, *(char *)((long)param_1 + 0x11) != '\0')) ||
     ((uVar3 = 2, *(char *)((long)param_1 + 0x12) != '\0' ||
      (uVar3 = 3, *(char *)((long)param_1 + 0x13) != '\0')))) {
    uVar4 = (ulong)((uVar3 >> 1) * 2 | uVar3 & 1);
    if (*(char *)((long)param_1 + uVar4 + 0x10) != '\0') {
      *(undefined1 *)((long)param_1 + uVar4 + 0x10) = 0;
      local_90 = (QArrayData *)QString::fromAscii_helper("IDE%1:%2",8);
      QString::arg(&local_88,&local_90,uVar3 >> 1,0,10,0x20);
      QString::arg(&local_80,&local_88,uVar3 & 1,0,10,0x20);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d188ad;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100d188ad:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d188e3;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100d188e3:
      pcVar1 = *(code **)(*param_1 + 0x30);
      local_98 = local_80;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper("type",4);
      (*pcVar1)(param_1,&local_98,&local_a0,2,10);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d18972;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d18972:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d189a8;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d189a8:
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","VmConfigParser",3,"VBox: Add default CD/DVD %s",
                      local_a8 + *(long *)(local_a8 + 0x10));
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d18a26;
          }
          QArrayData::deallocate(local_a8,1,8);
        }
      }
LAB_100d18a26:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d18a76;
        }
        QArrayData::deallocate(local_80,2,8);
      }
      goto LAB_100d18a76;
    }
  }
  FUN_100df99c0("","VmConfigParser",0,"VBox: No room for default CD/DVD");
LAB_100d18a76:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar8;
}

