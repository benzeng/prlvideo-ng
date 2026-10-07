
int FUN_100590160(long param_1,undefined8 param_2)

{
  int iVar1;
  long ****pppplVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long *plVar11;
  bool bVar12;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  long ***local_90;
  long ***local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  undefined8 local_48;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_58 = (ulong)*(uint *)(param_1 + 0x30);
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_90 = (long ***)&local_88;
  local_80 = 0;
  local_88 = (long ***)0x0;
  plVar8 = (long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) >> 9) * 8);
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x40)) {
    puVar4 = (undefined8 *)((*(ulong *)(param_1 + 0x58) & 0x1ff) * 8 + *plVar8);
  }
  local_48 = param_2;
  while( true ) {
    puVar5 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x40)) {
      uVar6 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x60);
      puVar5 = (undefined8 *)
               ((uVar6 & 0x1ff) * 8 + *(long *)(*(long *)(param_1 + 0x40) + (uVar6 >> 9) * 8));
    }
    if ((puVar4 == puVar5) || (local_38 < 0)) break;
    local_38 = (**(code **)(*(long *)*puVar4 + 200))
                         ((long *)*puVar4,2,&local_6c,&local_70,&local_74,&local_78,&local_68);
    if (-1 < local_38) {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x148))
                (*(long **)(param_1 + 0x70),local_6c,local_70,local_74,local_78);
    }
    (**(code **)(*(long *)*puVar4 + 0xd0))(&local_a0);
    FUN_100585d90(&local_98,param_1,&local_a0);
    FUN_10059a630(&local_90,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100590323;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100590323:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100590359;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100590359:
    puVar4 = puVar4 + 1;
    if ((long)puVar4 - *plVar8 == 0x1000) {
      puVar4 = (undefined8 *)plVar8[1];
      plVar8 = plVar8 + 1;
    }
  }
  if ((*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) && (-1 < local_38)) {
    plVar8 = *(long **)(param_1 + 0x20);
    do {
      FUN_100585d90(&local_a8,param_1,plVar8 + 7);
      pppplVar2 = (long ****)local_88;
      pppplVar10 = &local_88;
      if ((long ****)local_88 == (long ****)0x0) {
LAB_100590443:
        plVar7 = (long *)FUN_100684400(&local_a8,0x403,(int)plVar8[6],&local_38,0);
        if (plVar7 == (long *)0x0) {
          FUN_1008e3970("","vdisk",0,"Can\'t open image. Error 0x%x",local_38);
        }
        else {
          local_38 = (**(code **)(*plVar7 + 200))
                               (plVar7,2,&local_6c,&local_70,&local_74,&local_78,&local_68);
          if (-1 < local_38) {
            (**(code **)(**(long **)(param_1 + 0x70) + 0x148))
                      (*(long **)(param_1 + 0x70),local_6c,local_70,local_74,local_78);
          }
          (**(code **)(*plVar7 + 0x28))(plVar7);
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      else {
        do {
          while (pppplVar9 = pppplVar2, cVar3 = operator<((QString *)(pppplVar9 + 4),&local_a8),
                cVar3 != '\0') {
            pppplVar2 = (long ****)pppplVar9[1];
            if ((long ****)pppplVar9[1] == (long ****)0x0) goto LAB_100590423;
          }
          pppplVar10 = pppplVar9;
          pppplVar2 = (long ****)*pppplVar9;
        } while ((long ****)*pppplVar9 != (long ****)0x0);
LAB_100590423:
        if ((pppplVar10 == &local_88) ||
           (cVar3 = operator<(&local_a8,(QString *)(pppplVar10 + 4)), cVar3 != '\0'))
        goto LAB_100590443;
      }
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100590528;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100590528:
      plVar7 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar8[2];
          bVar12 = (long *)*plVar11 != plVar8;
          plVar8 = plVar11;
        } while (bVar12);
      }
      else {
        do {
          plVar11 = plVar7;
          plVar7 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
    } while ((plVar11 != (long *)(param_1 + 0x28)) && (plVar8 = plVar11, -1 < local_38));
  }
  iVar1 = local_38;
  FUN_100599020(&local_90,local_88);
  return iVar1;
}

