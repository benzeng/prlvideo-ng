
bool FUN_1008d4950(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  if (param_1 == 0) {
    uVar9 = 0x8f;
    uVar10 = 0x2f4;
LAB_1008d4a11:
    FUN_100887ce0(0x21,0x80,uVar9,"pk7_doit.c",uVar10);
    bVar11 = false;
    goto LAB_1008d4fb3;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0x7a;
    uVar10 = 0x2f9;
    goto LAB_1008d4a11;
  }
  FUN_10088a650(local_b8);
  iVar2 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  switch(iVar2) {
  case 0x15:
    local_d8 = *(long *)(param_1 + 0x20);
    break;
  case 0x16:
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    iVar3 = FUN_100821ab0(*(undefined8 *)(lVar5 + 0x18));
    if (iVar3 == 0x15) {
      local_d8 = *(long *)(lVar5 + 0x20);
    }
    else {
      iVar3 = FUN_100821ab0(*(undefined8 *)(lVar5 + 0x18));
      local_d8 = 0;
      if (5 < iVar3 - 0x15U) {
        piVar1 = *(int **)(lVar5 + 0x20);
        local_d8 = 0;
        if ((piVar1 != (int *)0x0) && (local_d8 = 0, *piVar1 == 4)) {
          local_d8 = *(long *)(piVar1 + 2);
        }
      }
    }
    iVar3 = FUN_100821ab0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
    if ((iVar3 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_1008afd70(local_d8);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      local_d8 = 0;
    }
    goto LAB_1008d4cac;
  case 0x17:
    local_d8 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10);
    if (local_d8 == 0) {
      local_d8 = FUN_1008afdf0(4);
      if (local_d8 == 0) {
        uVar9 = 0x41;
        uVar10 = 0x318;
        goto LAB_1008d49ca;
      }
      *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10) = local_d8;
    }
    break;
  case 0x18:
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    local_d8 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10);
    if (local_d8 == 0) {
      local_d8 = FUN_1008afdf0(4);
      if (local_d8 == 0) {
        uVar9 = 0x41;
        uVar10 = 0x30c;
        goto LAB_1008d49ca;
      }
      *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10) = local_d8;
    }
LAB_1008d4cac:
    if (lVar8 != 0) {
      iVar2 = FUN_100885600(lVar8);
      if (0 < iVar2) {
        iVar2 = 0;
        bVar11 = false;
        do {
          lVar5 = FUN_100885620(lVar8,iVar2);
          if (*(long *)(lVar5 + 0x38) != 0) {
            uVar4 = FUN_100821ab0(**(undefined8 **)(lVar5 + 0x10));
            lVar6 = FUN_1008d50e0(&local_88,param_2,uVar4);
            if ((lVar6 == 0) || (iVar3 = FUN_10088ab60(local_b8,local_88), iVar3 == 0))
            goto LAB_1008d4fa7;
            iVar3 = FUN_100885600(*(undefined8 *)(lVar5 + 0x18));
            if (iVar3 < 1) {
              local_bc = FUN_100891d80(*(undefined8 *)(lVar5 + 0x38));
              lVar7 = FUN_10081ddd0(local_bc,"pk7_doit.c",0x35a);
              if (lVar7 == 0) {
                lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
                goto LAB_1008d4fa7;
              }
              iVar3 = FUN_100891930(local_b8,lVar7,&local_bc,*(undefined8 *)(lVar5 + 0x38));
              if (iVar3 == 0) {
                FUN_100887ce0(0x21,0x80,6,"pk7_doit.c",0x35f);
                lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
                goto LAB_1008d4fa7;
              }
              FUN_1008afdb0(*(undefined8 *)(lVar5 + 0x28),lVar7,local_bc);
              lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
            }
            else {
              lVar6 = FUN_1008d5970(*(undefined8 *)(lVar5 + 0x18),0x34);
              if ((lVar6 == 0) && (iVar3 = FUN_1008d5ee0(lVar5,0), iVar3 == 0)) {
                FUN_100887ce0(0x21,0x88,0x41,"pk7_doit.c",0x2d2);
                goto LAB_1008d4fa7;
              }
              iVar3 = FUN_10088a9c0(local_b8,local_78,&local_7c);
              if (iVar3 == 0) {
                FUN_100887ce0(0x21,0x88,6,"pk7_doit.c",0x2d9);
                goto LAB_1008d4fa7;
              }
              iVar3 = FUN_1008d5f50(lVar5,local_78,local_7c);
              if (iVar3 == 0) {
                FUN_100887ce0(0x21,0x88,0x41,"pk7_doit.c",0x2dd);
                goto LAB_1008d4fa7;
              }
              iVar3 = FUN_1008d51a0(lVar5);
              if (iVar3 == 0) goto LAB_1008d4fa7;
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100885600(lVar8);
        } while (iVar2 < iVar3);
      }
      break;
    }
LAB_1008d4e4e:
    if (iVar2 != 0x19) break;
    uVar4 = FUN_100821ab0(**(undefined8 **)(*(long *)(param_1 + 0x20) + 8));
    lVar8 = FUN_1008d50e0(&local_88,param_2,uVar4);
    if ((lVar8 != 0) && (iVar2 = FUN_10088a9c0(local_88,local_78,&local_c0), iVar2 != 0)) {
      FUN_1008afb30(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),local_78,local_c0);
      break;
    }
    bVar11 = false;
    goto LAB_1008d4fa7;
  case 0x19:
    lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar3 = FUN_100821ab0(*(undefined8 *)(lVar8 + 0x18));
    if (iVar3 == 0x15) {
      local_d8 = *(long *)(lVar8 + 0x20);
    }
    else {
      iVar3 = FUN_100821ab0(*(undefined8 *)(lVar8 + 0x18));
      local_d8 = 0;
      if (5 < iVar3 - 0x15U) {
        piVar1 = *(int **)(lVar8 + 0x20);
        local_d8 = 0;
        if ((piVar1 != (int *)0x0) && (local_d8 = 0, *piVar1 == 4)) {
          local_d8 = *(long *)(piVar1 + 2);
        }
      }
    }
    iVar3 = FUN_100821ab0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x18));
    if ((iVar3 == 0x15) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_1008afd70(local_d8);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
      local_d8 = 0;
    }
    goto LAB_1008d4e4e;
  default:
    uVar9 = 0x70;
    uVar10 = 0x334;
LAB_1008d49ca:
    FUN_100887ce0(0x21,0x80,uVar9,"pk7_doit.c",uVar10);
    bVar11 = false;
    goto LAB_1008d4fa7;
  }
  iVar2 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x16) {
    lVar8 = FUN_1008d27b0(param_1,2,0,0);
    bVar11 = true;
    if (lVar8 == 0) goto LAB_1008d4eef;
  }
  else {
LAB_1008d4eef:
    bVar11 = false;
    if (local_d8 != 0) {
      if ((*(byte *)(local_d8 + 0x10) & 0x10) == 0) {
        lVar8 = FUN_10087e1f0(param_2,0x401);
        if (lVar8 == 0) {
          FUN_100887ce0(0x21,0x80,0x6b,"pk7_doit.c",0x37c);
        }
        else {
          uVar4 = FUN_10087db60(lVar8,3,0,&local_c8);
          FUN_10087d630(lVar8,0x200);
          FUN_10087db60(lVar8,0x82,0,0);
          FUN_1008afdb0(local_d8,local_c8,uVar4);
        }
        bVar11 = lVar8 != 0;
      }
      else {
        bVar11 = true;
      }
    }
  }
LAB_1008d4fa7:
  FUN_10088aa50(local_b8);
LAB_1008d4fb3:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar11;
}

