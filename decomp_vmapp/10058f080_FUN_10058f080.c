
void FUN_10058f080(long param_1,long *param_2,char param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  uint uVar2;
  long ****pppplVar3;
  long lVar4;
  long *****ppppplVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  long *****ppppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *****ppppplVar12;
  long *plVar13;
  long *****ppppplVar14;
  long *plVar15;
  QArrayData *local_90;
  QArrayData *local_88;
  long ****local_80;
  long ****local_78;
  long local_70;
  long ****local_68;
  long ****local_60;
  long local_58;
  long ****local_50;
  long ****local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  local_68 = (long ****)&local_68;
  local_58 = 0;
  local_70 = 0;
  local_80 = (long ****)&local_80;
  local_78 = (long ****)&local_80;
  local_60 = local_68;
  local_50 = (long ****)&local_50;
  local_48 = (long ****)&local_50;
  FUN_100598840();
  if ((param_3 == '\0') || (*(long *)(param_4 + 0x10) == 0)) goto LAB_10058f667;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_10058f43a:
    FUN_1007d6a70(&local_90,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: unable to find deleting node %s in the map",
                  local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058f4af;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10058f4af:
    iVar8 = -0x7ffe6fed;
    ppppplVar9 = (long *****)local_78;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058f544;
      }
      QArrayData::deallocate(local_90,2,8);
      ppppplVar9 = (long *****)local_78;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x28);
    plVar13 = (long *)(param_1 + 0x28);
    do {
      while (plVar15 = plVar6, iVar8 = FUN_1007ea6f0(plVar15 + 4,param_2), iVar8 < 0) {
        plVar1 = plVar15 + 1;
        plVar15 = plVar13;
        plVar6 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10058f170;
      }
      plVar6 = (long *)*plVar15;
      plVar13 = plVar15;
    } while ((long *)*plVar15 != (long *)0x0);
LAB_10058f170:
    if ((plVar15 == (long *)(param_1 + 0x28)) ||
       (iVar8 = FUN_1007ea6f0(param_2,plVar15 + 4), iVar8 < 0)) goto LAB_10058f43a;
    ppppplVar9 = operator_new(0x20);
    pppplVar3 = (long ****)*param_2;
    ppppplVar9[3] = (long ****)param_2[1];
    ppppplVar9[2] = pppplVar3;
    ppppplVar9[1] = (long ****)&local_50;
    *ppppplVar9 = local_50;
    local_50[1] = (long ***)ppppplVar9;
    local_40 = local_40 + 1;
    local_50 = (long ****)ppppplVar9;
    iVar8 = FUN_10058aa20(param_1,&local_68,param_4,0);
    if (iVar8 < 0) {
      FUN_1008e3970("","vdisk",0,"Error: filling images list #1 0x%x",iVar8);
      ppppplVar9 = (long *****)local_78;
    }
    else {
      iVar8 = FUN_10058aa20(param_1,&local_80,&local_50,0);
      if (-1 < iVar8) {
        lVar4 = *param_2;
        *(long *)(param_1 + 0xa4) = param_2[1];
        *(long *)(param_1 + 0x9c) = lVar4;
        uVar10 = *(long *)(param_1 + 0x60) + -1 + *(long *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0xb8) =
             *(undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x40) + (uVar10 >> 9) * 8) + (uVar10 & 0x1ff) * 8);
        cVar7 = FUN_10058a3b0(param_1,param_4,param_2);
        *(char *)(param_1 + 0xb0) = cVar7;
        *(undefined1 *)(param_1 + 0xb1) = param_5;
        if (cVar7 == '\0') {
          lVar4 = *param_2;
          *(long *)(param_1 + 0xd8) = param_2[1];
          *(long *)(param_1 + 0xd0) = lVar4;
          pppplVar3 = (long ****)local_78[2];
          *(long ****)(param_1 + 200) = local_78[3];
          *(long *****)(param_1 + 0xc0) = pppplVar3;
          ppppplVar9 = (long *****)(param_1 + 0xe0);
          if (ppppplVar9 != &local_68) {
            ppppplVar12 = (long *****)local_60;
            ppppplVar5 = (long *****)local_60;
            for (ppppplVar14 = *(long ******)(param_1 + 0xe8);
                (ppppplVar5 != &local_68 && (ppppplVar12 = ppppplVar5, ppppplVar14 != ppppplVar9));
                ppppplVar14 = (long *****)ppppplVar14[1]) {
              pppplVar3 = ppppplVar5[2];
              ppppplVar14[3] = ppppplVar5[3];
              ppppplVar14[2] = pppplVar3;
              ppppplVar5 = (long *****)ppppplVar5[1];
              ppppplVar12 = &local_68;
            }
            if (ppppplVar14 == ppppplVar9) {
              FUN_10059a510(ppppplVar9,ppppplVar9,ppppplVar12,&local_68,0);
            }
            else {
              lVar4 = *(long *)(param_1 + 0xe0);
              pppplVar3 = *ppppplVar14;
              pppplVar3[1] = *(long ****)(lVar4 + 8);
              **(long **)(lVar4 + 8) = (long)pppplVar3;
              do {
                ppppplVar5 = (long *****)ppppplVar14[1];
                *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
                operator_delete(ppppplVar14);
                ppppplVar14 = ppppplVar5;
              } while (ppppplVar5 != ppppplVar9);
            }
          }
        }
        else {
          if (*(long *)(param_4 + 0x10) != 1) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Successors.size() == 1"
                          ,"Storage.cpp",0x7ff,"DeleteStateBegin");
          }
          if (local_58 != 1) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "TmpImgList1.size() == 1","Storage.cpp",0x800,"DeleteStateBegin");
          }
          if (local_70 != 1) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "TmpImgList2.size() == 1","Storage.cpp",0x801,"DeleteStateBegin");
          }
          uVar11 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x10);
          *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x18);
          *(undefined8 *)(param_1 + 0xd0) = uVar11;
          pppplVar3 = (long ****)local_60[2];
          *(long ****)(param_1 + 200) = local_60[3];
          *(long *****)(param_1 + 0xc0) = pppplVar3;
          ppppplVar9 = (long *****)(param_1 + 0xe0);
          if (ppppplVar9 != &local_80) {
            ppppplVar12 = (long *****)local_78;
            ppppplVar5 = (long *****)local_78;
            for (ppppplVar14 = *(long ******)(param_1 + 0xe8);
                (ppppplVar5 != &local_80 && (ppppplVar12 = ppppplVar5, ppppplVar14 != ppppplVar9));
                ppppplVar14 = (long *****)ppppplVar14[1]) {
              pppplVar3 = ppppplVar5[2];
              ppppplVar14[3] = ppppplVar5[3];
              ppppplVar14[2] = pppplVar3;
              ppppplVar5 = (long *****)ppppplVar5[1];
              ppppplVar12 = &local_80;
            }
            if (ppppplVar14 == ppppplVar9) {
              FUN_10059a510(ppppplVar9,ppppplVar9,ppppplVar12,&local_80,0);
            }
            else {
              lVar4 = *(long *)(param_1 + 0xe0);
              pppplVar3 = *ppppplVar14;
              pppplVar3[1] = *(long ****)(lVar4 + 8);
              **(long **)(lVar4 + 8) = (long)pppplVar3;
              do {
                ppppplVar5 = (long *****)ppppplVar14[1];
                *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
                operator_delete(ppppplVar14);
                ppppplVar14 = ppppplVar5;
              } while (ppppplVar5 != ppppplVar9);
            }
          }
          if (*(char *)(param_1 + 0xb1) != '\0') {
            uVar2 = *(uint *)(*(long *)(param_1 + 0xe8) + 0x18);
            uVar10 = (ulong)uVar2;
            *(uint *)(param_1 + 0xac) = uVar2;
            if (uVar10 != 0xffffffff) {
              if (*(ulong *)(param_1 + 0x60) <= uVar10) {
                FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                              "m_Merge.WrBackwardSnap < m_CurrentPath.size()","Storage.cpp",0x816,
                              "DeleteStateBegin");
                uVar10 = (ulong)*(uint *)(param_1 + 0xac);
              }
              uVar10 = uVar10 + *(long *)(param_1 + 0x58);
              *(undefined8 *)(param_1 + 0xb8) =
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x40) + (uVar10 >> 9) * 8) + (uVar10 & 0x1ff) * 8
                    );
              (**(code **)(**(long **)(param_1 + 0xc0) + 0x68))();
              (**(code **)(**(long **)(param_1 + 0xc0) + 0x30))();
              uVar11 = (**(code **)(**(long **)(param_1 + 0x70) + 0x350))();
              FUN_1005ad4b0(uVar11,*(undefined4 *)(param_1 + 0xac));
            }
          }
        }
        goto LAB_10058f667;
      }
      FUN_1008e3970("","vdisk",0,"Error: filling images list #2 0x%x",iVar8);
      ppppplVar9 = (long *****)local_78;
    }
  }
LAB_10058f544:
  for (; ppppplVar9 != &local_80; ppppplVar9 = (long *****)ppppplVar9[1]) {
    if ((*(int *)(ppppplVar9 + 3) == -1) && (ppppplVar9[2] != (long ****)0x0)) {
      (*(code *)(*ppppplVar9[2])[5])();
      (*(code *)(*ppppplVar9[2])[4])();
      ppppplVar9[2] = (long ****)0x0;
    }
  }
  if (local_70 != 0) {
    pppplVar3 = (long ****)*local_78;
    pppplVar3[1] = local_80[1];
    *local_80[1] = (long **)pppplVar3;
    local_70 = 0;
    ppppplVar9 = (long *****)local_78;
    while (ppppplVar9 != &local_80) {
      ppppplVar14 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar14;
    }
  }
  for (ppppplVar9 = (long *****)local_60; ppppplVar9 != &local_68;
      ppppplVar9 = (long *****)ppppplVar9[1]) {
    if ((*(int *)(ppppplVar9 + 3) == -1) && (ppppplVar9[2] != (long ****)0x0)) {
      (*(code *)(*ppppplVar9[2])[5])();
      (*(code *)(*ppppplVar9[2])[4])();
      ppppplVar9[2] = (long ****)0x0;
    }
  }
  if (local_58 != 0) {
    pppplVar3 = (long ****)*local_60;
    pppplVar3[1] = local_68[1];
    *local_68[1] = (long **)pppplVar3;
    local_58 = 0;
    ppppplVar9 = (long *****)local_60;
    while (ppppplVar9 != &local_68) {
      ppppplVar14 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar14;
    }
  }
  FUN_100598840((int *)(param_1 + 0x98));
  *(int *)(param_1 + 0x98) = iVar8;
LAB_10058f667:
  if (local_70 != 0) {
    pppplVar3 = (long ****)*local_78;
    pppplVar3[1] = local_80[1];
    *local_80[1] = (long **)pppplVar3;
    local_70 = 0;
    ppppplVar9 = (long *****)local_78;
    while (ppppplVar9 != &local_80) {
      ppppplVar14 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar14;
    }
  }
  if (local_58 != 0) {
    pppplVar3 = (long ****)*local_60;
    pppplVar3[1] = local_68[1];
    *local_68[1] = (long **)pppplVar3;
    local_58 = 0;
    ppppplVar9 = (long *****)local_60;
    while (ppppplVar9 != &local_68) {
      ppppplVar14 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar14;
    }
  }
  if (local_40 != 0) {
    pppplVar3 = (long ****)*local_48;
    pppplVar3[1] = local_50[1];
    *local_50[1] = (long **)pppplVar3;
    local_40 = 0;
    ppppplVar9 = (long *****)local_48;
    while (ppppplVar9 != &local_50) {
      ppppplVar14 = (long *****)ppppplVar9[1];
      operator_delete(ppppplVar9);
      ppppplVar9 = ppppplVar14;
    }
  }
  return;
}

