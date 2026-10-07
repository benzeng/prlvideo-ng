
int FUN_1005f80a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long local_a8;
  long *local_a0;
  long local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  char local_7a;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_7a = '\0';
  local_38 = lVar9;
  FUN_1007d6870(&local_58);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x310))();
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar12 = (long *)0x0;
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 0x10);
  }
  (**(code **)(*plVar12 + 0xa0))(local_68);
  puVar1 = (undefined8 *)(param_1 + 0x72);
  iVar5 = FUN_1007ea6f0(puVar1);
  if (iVar5 == 0) {
    iVar5 = -0x7ffe6fec;
    FUN_1008e3970("","vdisk",0,"Error: can\'t do anything with temporary UID");
    goto LAB_1005f816c;
  }
  cVar4 = FUN_1007ea210(puVar1);
  if (cVar4 != '\0') {
    iVar5 = -0x7ffe6fec;
    FUN_1008e3970("","vdisk",0,"Error: can\'t do anything with null uuid");
    goto LAB_1005f816c;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar12 = (long *)0x0;
  if (lVar2 != 0) {
    plVar12 = *(long **)(lVar2 + 0x10);
  }
  (**(code **)(*plVar12 + 0xb8))(&local_78,plVar12,puVar1,&local_7a);
  local_50 = local_70;
  local_58 = local_78;
  if (local_7a != '\0') {
    *(undefined8 *)(param_1 + 0x6a) = local_70;
    *(undefined8 *)(param_1 + 0x62) = local_78;
    lVar9 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    plVar12 = (long *)0x0;
    if (lVar9 != 0) {
      plVar12 = *(long **)(lVar9 + 0x10);
    }
    (**(code **)(*plVar12 + 0xc0))(&local_a8,plVar12,puVar1);
    plVar12 = (long *)(param_1 + 0x88);
    if (plVar12 != &local_a8) {
      plVar7 = local_a0;
      plVar3 = local_a0;
      for (plVar10 = *(long **)(param_1 + 0x90);
          (plVar3 != &local_a8 && (plVar7 = plVar3, plVar10 != plVar12));
          plVar10 = (long *)plVar10[1]) {
        lVar9 = plVar3[2];
        plVar10[3] = plVar3[3];
        plVar10[2] = lVar9;
        plVar3 = (long *)plVar3[1];
        plVar7 = &local_a8;
      }
      if (plVar10 == plVar12) {
        FUN_10057f090(plVar12,plVar12,plVar7,&local_a8,0);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x88);
        lVar2 = *plVar10;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar9 + 8);
        **(long **)(lVar9 + 8) = lVar2;
        do {
          plVar3 = (long *)plVar10[1];
          *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
          operator_delete(plVar10);
          plVar10 = plVar3;
        } while (plVar3 != plVar12);
      }
    }
    if (local_98 != 0) {
      lVar9 = *local_a0;
      *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(local_a8 + 8);
      **(long **)(local_a8 + 8) = lVar9;
      local_98 = 0;
      while (local_a0 != &local_a8) {
        plVar10 = (long *)local_a0[1];
        operator_delete(local_a0);
        local_a0 = plVar10;
      }
    }
    plVar10 = *(long **)(param_1 + 0x90);
    if (plVar10 != plVar12) {
      do {
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xa0))(local_48)
        ;
        iVar5 = FUN_1007ea6f0(plVar10 + 2,local_48);
        uVar6 = 1;
        if (iVar5 == 0) goto LAB_1005f8428;
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != plVar12);
    }
    uVar6 = 0;
LAB_1005f8428:
    *(undefined1 *)(param_1 + 0xa0) = uVar6;
    iVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x1a0))
                      (*(long **)(param_1 + 0x58),param_1 + 0xa8);
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar5 < 0) {
      FUN_1008e3970("","vdisk",0,"Getting tree failed, err = 0x%X, ",iVar5);
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      plVar10 = (long *)0x0;
      if (lVar2 != 0) {
        plVar10 = *(long **)(lVar2 + 0x10);
      }
      uVar8 = 4;
      if (*(char *)(param_1 + 0x82) == '\0') {
        uVar8 = 5;
      }
      iVar5 = (**(code **)(*plVar10 + 0x90))(plVar10,puVar1,uVar8);
      if (iVar5 < 0) {
        FUN_1008e3970("","vdisk",0,"Error preparing delete operation 0x%x",iVar5);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x58);
        uVar8 = *puVar1;
        *(undefined8 *)(lVar2 + 0x1170) = *(undefined8 *)(param_1 + 0x7a);
        *(undefined8 *)(lVar2 + 0x1168) = uVar8;
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 8);
        plVar10 = (long *)0x0;
        if (lVar2 != 0) {
          plVar10 = *(long **)(lVar2 + 0x10);
        }
        iVar5 = (**(code **)(*plVar10 + 0x18))();
        if (iVar5 < 0) {
          FUN_1008e3970("","vdisk",0,"Error preparing delete operation 0x%x",iVar5);
        }
        else {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
          FUN_1005ab5b0(uVar8);
          for (puVar11 = *(undefined8 **)(param_1 + 0x18); puVar11 != (undefined8 *)(param_1 + 0x18)
              ; puVar11 = (undefined8 *)*puVar11) {
            FUN_10058f080(*(undefined8 *)puVar11[-2],puVar1,*(undefined1 *)(param_1 + 0x82),plVar12,
                          *(undefined1 *)(param_1 + 0xa0));
          }
          iVar5 = FUN_1005fae80(param_1);
          lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
      }
    }
    goto LAB_1005f816c;
  }
  FUN_1007d6a70(&local_90,puVar1);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: can\'t delete snapshot by non existing uuid %s",
                local_88 + *(long *)(local_88 + 0x10));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_79 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005f8312;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1005f8312:
  iVar5 = -0x7ffe6fec;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_79 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1005f816c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005f816c:
  if (lVar9 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

