
void FUN_100070600(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  long *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  plVar1 = (long *)*param_3;
  if ((plVar1 == (long *)0x0) || (lVar2 = plVar1[2], lVar2 == 0))
  goto switchD_100070675_caseD_30db0;
  iVar14 = *(int *)(lVar2 + 0x40);
  if (0x30e07 < iVar14) {
    if ((iVar14 - 0x30e08U < 9) && ((0x1a9U >> (iVar14 - 0x30e08U & 0x1f) & 1) != 0)) {
      FUN_100071890(param_1,param_3,param_2);
    }
    goto switchD_100070675_caseD_30db0;
  }
  switch(iVar14) {
  case 0x30da8:
    puVar11 = (uint *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar11 = *(uint **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if ((0x1b < *(uint *)(lVar2 + 0x8c)) && (puVar11[6] < 0x10)) {
      uVar7 = 0;
      uVar5 = 0;
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) != '\0') {
        FUN_1002b1100(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a38));
        lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a38);
        uVar5 = *(uint *)(lVar2 + 0x938 + (ulong)puVar11[6] * 0x8f0);
        uVar7 = *(uint *)(lVar2 + 0x93c + (ulong)puVar11[6] * 0x8f0);
      }
      local_58 = (long *)0x0;
      pvVar6 = operator_new__(0x18);
      local_58 = operator_new(0x18);
      *(undefined4 *)(local_58 + 1) = 1;
      local_58[2] = (long)pvVar6;
      *local_58 = (long)&PTR_FUN_100bef320;
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_58 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
      puVar8 = (undefined4 *)0x0;
      if (local_58 != (long *)0x0) {
        puVar8 = (undefined4 *)local_58[2];
      }
      *puVar8 = 0;
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) != '\0') {
        *puVar8 = *(undefined4 *)
                   (*(long *)(*(long *)(param_1 + 0x20) + 0x1a38) + 0x930 +
                   (ulong)puVar11[6] * 0x8f0);
      }
      uVar4 = *puVar11;
      if (uVar5 <= uVar4) {
        *puVar11 = 0;
        uVar4 = 0;
      }
      uVar12 = puVar11[1];
      if (uVar7 <= uVar12) {
        puVar11[1] = 0;
        uVar12 = 0;
      }
      if (uVar5 - uVar4 < puVar11[2]) {
        puVar11[2] = uVar5 - uVar4;
      }
      if (uVar7 - uVar12 < puVar11[3]) {
        puVar11[3] = uVar7 - uVar12;
      }
      puVar8[1] = uVar4;
      puVar8[2] = puVar11[1];
      puVar8[3] = puVar11[2];
      puVar8[4] = puVar11[3];
      puVar8[5] = puVar11[6];
      FUN_100791610(&local_60,0x30d47,0,&local_58,0x18,param_3,1);
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
      (**(code **)(*plVar1 + 0x120))(&local_68,plVar1,param_2,&local_60);
      if ((local_68 != (long *)0x0) &&
         ((local_68[2] == 0 || (FUN_1007965e0(local_68[2]), local_68 != (long *)0x0)))) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (local_58 != (long *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
    }
    break;
  case 0x30da9:
    uVar15 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (0x1b < *(uint *)(lVar2 + 0x8c)) {
      FUN_10009f6d0(*(undefined8 *)(param_1 + 0x20),uVar15,(ulong)(*(uint *)(lVar2 + 0x8c) >> 2) / 7
                   );
    }
    break;
  case 0x30daa:
    lVar16 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar16 = *(long *)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if ((3 < *(uint *)(lVar2 + 0x8c)) && (uVar5 = *(uint *)(lVar2 + 0x8c) >> 2, uVar5 != 0)) {
      uVar19 = 0;
      do {
        FUN_1000917d0(*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(lVar16 + uVar19 * 4),
                      *(undefined2 *)(lVar16 + 2 + uVar19 * 4));
        if (uVar19 < uVar5 - 1) {
          _usleep(100000);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar5);
    }
    break;
  case 0x30dab:
  case 0x30dac:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    uVar5 = *(uint *)(lVar2 + 0x8c);
    if (0xf < uVar5) {
      uVar18 = 0;
      if (uVar5 < 0x14) {
        uVar17 = 0;
        uVar13 = 0;
      }
      else {
        uVar17 = puVar8[4];
        if (uVar5 < 0x1c) {
          uVar13 = 0;
        }
        else {
          uVar13 = puVar8[5];
          uVar18 = puVar8[6];
        }
      }
      FUN_100091600(*(undefined8 *)(param_1 + 0x20),iVar14 == 0x30dab,*puVar8,puVar8[1],puVar8[2],
                    uVar17,uVar13,uVar18,puVar8[3]);
    }
    break;
  case 0x30dad:
    FUN_100430650(*(undefined8 *)(param_1 + 0x18),param_2);
    break;
  case 0x30dae:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (3 < *(uint *)(lVar2 + 0x8c)) {
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *puVar8;
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      local_88 = plVar1;
      FUN_1000a05b0(uVar15,uVar18,&local_88);
      if (local_88 != (long *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
    }
    break;
  case 0x30daf:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if ((*(uint *)(lVar2 + 0x8c) < 0x1c) || (0xf < (uint)puVar8[6])) break;
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) == '\0') {
      cVar3 = '\0';
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a38);
      local_40 = (QArrayData *)*param_2;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      cVar3 = FUN_1002af860(uVar15,&local_40,puVar8[6],*puVar8,puVar8[1],puVar8[2],puVar8[3],
                            puVar8[4],puVar8[5]);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000712d8;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_1000712d8:
    uVar15 = 0x1896c;
    if (cVar3 != '\0') {
      uVar15 = 0x18978;
    }
    FUN_100791380(&local_48,uVar15,0,puVar8,0x1c,param_3,0);
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
    (**(code **)(*plVar1 + 0x120))(&local_50,plVar1,param_2,&local_48);
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    break;
  case 0x30db1:
    lVar16 = *(long *)(lVar2 + 0x80);
    piVar9 = (int *)0x0;
    if (lVar16 != 0) {
      piVar9 = *(int **)(lVar16 + 0x10);
    }
    if (((0xb < (ulong)*(uint *)(lVar2 + 0x8c)) &&
        ((ulong)(uint)piVar9[2] + 0xc <= (ulong)*(uint *)(lVar2 + 0x8c))) && (*piVar9 != 0)) {
      iVar14 = 0;
      if (lVar16 != 0) {
        iVar14 = (int)*(undefined8 *)(lVar16 + 0x10);
      }
      QByteArray::fromRawData((char *)&local_80,iVar14 + 0xc);
      FUN_10009f770(*(undefined8 *)(param_1 + 0x20),*piVar9,piVar9[1],&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
    break;
  case 0x30db3:
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    local_90 = (QArrayData *)*param_2;
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
    FUN_10009f860(uVar15,&local_90,param_3);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_90,2,8);
    }
    break;
  case 0x30db4:
    iVar14 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      iVar14 = (int)*(undefined8 *)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    QByteArray::fromRawData((char *)&local_70,iVar14);
    FUN_1000a1c40(*(undefined8 *)(param_1 + 0x20),param_2,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_70,1,8);
    }
    break;
  case 0x30db5:
    lVar2 = *(long *)(param_1 + 0x20);
    local_78 = (QArrayData *)*param_2;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    FUN_100519d30(lVar2 + 0x10f0,&local_78,param_3);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    break;
  case 0x30db6:
    lVar16 = *(long *)(lVar2 + 0x80);
    puVar8 = (undefined4 *)0x0;
    if (lVar16 != 0) {
      puVar8 = *(undefined4 **)(lVar16 + 0x10);
    }
    if (((ulong)*(uint *)(lVar2 + 0x8c) < 0xc) ||
       ((ulong)*(uint *)(lVar2 + 0x8c) < (ulong)(uint)puVar8[2] + 0xc)) break;
    iVar14 = 0;
    if (lVar16 != 0) {
      iVar14 = (int)*(undefined8 *)(lVar16 + 0x10);
    }
    QByteArray::fromRawData((char *)&local_98,iVar14 + 0xc);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    uVar18 = *puVar8;
    local_a0 = (QArrayData *)*param_2;
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    local_a8 = (long *)*param_3;
    if (local_a8 != (long *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    FUN_10009fd00(uVar15,uVar18,&local_98,&local_a0,&local_a8);
    if (local_a8 != (long *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_a8 + 0x10))();
      }
    }
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100070f45;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100070f45:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_98,1,8);
    }
    break;
  case 0x30db7:
    FUN_10009feb0(*(undefined8 *)(param_1 + 0x20));
    break;
  case 0x30db8:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (3 < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000a0030(*(undefined8 *)(param_1 + 0x20),*puVar8);
    }
    break;
  case 0x30db9:
    FUN_1000a0200(*(undefined8 *)(param_1 + 0x20));
    break;
  case 0x30dba:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (0xf < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000a0280(*(undefined8 *)(param_1 + 0x20),*puVar8,puVar8[1],puVar8[2],puVar8[3]);
    }
    break;
  case 0x30dbb:
    FUN_10009ff30(*(undefined8 *)(param_1 + 0x20));
    break;
  case 0x30dbc:
    piVar9 = (int *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      piVar9 = *(int **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (3 < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000a0340(*(undefined8 *)(param_1 + 0x20),*piVar9 == 0);
    }
    break;
  case 0x30dbd:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (0x17 < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000a03e0(*(undefined8 *)(param_1 + 0x20),*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],
                    puVar8[5]);
    }
    break;
  case 0x30dbe:
    puVar10 = (undefined2 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar10 = *(undefined2 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (3 < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000919d0(*(undefined8 *)(param_1 + 0x20),*puVar10,puVar10[1]);
    }
    break;
  case 0x30dbf:
    QMutex::lock();
    lVar2 = DAT_1011c3620;
    if (DAT_1011c3620 != 0) {
      DAT_1011c3628 = DAT_1011c3628 + 1;
    }
    QMutex::unlock();
    if (lVar2 != 0) {
      FUN_10004fc00(lVar2,param_2,param_3);
      FUN_100080ba0(&DAT_1011c3610);
    }
    break;
  case 0x30dc6:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if ((3 < *(uint *)(lVar2 + 0x8c)) && (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) != '\0')) {
      FUN_1000d7990(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x107f8),*puVar8);
    }
    break;
  case 0x30dc7:
  case 0x30dc8:
  case 0x30dc9:
  case 0x30dca:
    QMutex::lock();
    lVar2 = DAT_1011cc808;
    if (DAT_1011cc808 != 0) {
      DAT_1011cc810 = DAT_1011cc810 + 1;
    }
    QMutex::unlock();
    if (lVar2 == 0) break;
    if ((*(long *)(lVar2 + 0xb8) == 0) || (lVar16 = *(long *)(lVar2 + 0xb8) + -0x10, lVar16 == 0)) {
      FUN_1008e3970("","vm",0,"Can\'t find Single Sign On tool");
    }
    else {
      local_b0 = (QArrayData *)*param_2;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      local_b8 = (long *)*param_3;
      if (local_b8 != (long *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      FUN_100039740(lVar16,&local_b0,&local_b8);
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100070764;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100070764:
      if (lVar2 == 0) break;
    }
    FUN_100026030(&DAT_1011cc7f8);
    break;
  case 0x30dcb:
    uVar15 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (0x23 < *(uint *)(lVar2 + 0x8c)) {
      FUN_10009f720(*(undefined8 *)(param_1 + 0x20),uVar15,(ulong)*(uint *)(lVar2 + 0x8c) / 0x24);
    }
    break;
  case 0x30dcc:
    uVar15 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    FUN_1000a04b0(*(undefined8 *)(param_1 + 0x20),uVar15,(ulong)*(uint *)(lVar2 + 0x8c) / 0x18);
    break;
  case 0x30dd1:
    FUN_10009ffb0(*(undefined8 *)(param_1 + 0x20));
    break;
  case 0x30dd5:
    puVar8 = (undefined4 *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar8 = *(undefined4 **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (3 < *(uint *)(lVar2 + 0x8c)) {
      FUN_1000a00d0(*(undefined8 *)(param_1 + 0x20),*puVar8);
    }
    break;
  case 0x30dd6:
    puVar11 = (uint *)0x0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      puVar11 = *(uint **)(*(long *)(lVar2 + 0x80) + 0x10);
    }
    if (((7 < *(uint *)(lVar2 + 0x8c)) && (*puVar11 < 0x10)) &&
       (*(char *)(*(long *)(param_1 + 0x20) + 0x1ab8) != '\0')) {
      FUN_1002af230(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a38),*puVar11,puVar11[1] != 0);
    }
  }
switchD_100070675_caseD_30db0:
  QMutex::unlock();
  return;
}

