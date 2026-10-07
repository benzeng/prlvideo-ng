
void FUN_1003ed3a0(long *param_1)

{
  char *pcVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x58) {
    uVar12 = *(uint *)(pcVar1 + 6);
    uVar11 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                    uVar12 << 0x18);
    lVar4 = param_1[0xb];
    if (((*(byte *)(lVar4 + 1) & 8) != 0) && (*(char *)(lVar4 + 10) < '\0')) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      uVar9 = 0x52400;
      goto LAB_1003ed453;
    }
  }
  else {
    uVar11 = (ulong)CONCAT11((char)*(undefined2 *)(pcVar1 + 7),
                             (char)((ushort)*(undefined2 *)(pcVar1 + 7) >> 8));
    lVar4 = param_1[0xb];
  }
  uVar12 = *(uint *)(lVar4 + 2);
  uVar6 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 << 0x18);
  local_4c = 0;
  iVar10 = (int)uVar11;
  if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ed484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  if (uVar6 <= (ulong)param_1[0x14]) {
    lVar4 = *(long *)(param_1[0x25] + 0x720);
    uVar12 = 0xfffffff0;
    uVar8 = 0;
    do {
      iVar2 = FUN_1003f13b0(lVar4,param_1[9] + (ulong)(uVar12 + 0x10),uVar6,1,0x800,&local_4c);
      if (iVar2 == -0xf) {
        if (local_4c == 0x930) {
          if (((iVar10 == 1) || (iVar10 - 1 == uVar8)) || (uVar8 == 0)) {
            pvVar3 = _malloc(0x930);
            if (pvVar3 == (void *)0x0) {
              puVar5 = (undefined8 *)___cxa_allocate_exception(8);
              *puVar5 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(puVar5,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
            }
            iVar2 = FUN_1003f13b0(lVar4,pvVar3,uVar6,1,0x930,&local_4c);
            if ((iVar2 == 0) && (local_4c == 0x930)) {
              local_4c = 0x800;
              _memcpy((void *)((ulong)(uVar12 + 0x10) + param_1[9]),(void *)((long)pvVar3 + 0x10),
                      0x800);
            }
            _free(pvVar3);
          }
          else {
            uVar13 = (ulong)uVar12;
            lVar7 = param_1[9];
            local_48 = *(undefined8 *)(lVar7 + uVar13);
            local_40 = *(undefined8 *)(lVar7 + 8 + uVar13);
            iVar2 = FUN_1003f13b0(lVar4,lVar7 + uVar13,uVar6,1,0x930,&local_4c);
            if ((iVar2 == 0) && (local_4c == 0x930)) {
              local_4c = 0x800;
            }
            lVar7 = param_1[9];
            *(undefined8 *)(lVar7 + 8 + uVar13) = local_40;
            *(undefined8 *)(lVar7 + uVar13) = local_48;
          }
          if (iVar2 != -0xf) goto LAB_1003ed5fb;
        }
        lVar4 = *param_1;
        lVar7 = param_1[0xc];
        uVar9 = 0x56400;
LAB_1003ed675:
        (**(code **)(lVar4 + 0x268))(param_1,uVar9,lVar7);
        goto LAB_1003ed67e;
      }
LAB_1003ed5fb:
      if (iVar2 == 0) {
        if (local_4c != 0x800) {
          if (local_4c == 0) {
            if (*(int *)((long)param_1 + 0x7c) == 0) {
              param_1[0x27] = (ulong)(uint)((int)uVar6 + 1 + (int)uVar8);
              lVar4 = *param_1;
              lVar7 = param_1[0xc];
              uVar9 = 0x31100;
            }
            else {
              lVar4 = *param_1;
              lVar7 = param_1[0xc];
              uVar9 = 0x23a00;
            }
          }
          else {
            lVar4 = *param_1;
            lVar7 = param_1[0xc];
            uVar9 = 0x31108;
          }
          goto LAB_1003ed675;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      else {
        local_4c = 0;
        *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(lVar4 + 0x1fe8);
      }
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 + 0x800;
    } while (uVar8 < uVar11);
    param_1[0x27] = (ulong)(uint)((int)uVar6 + 1 + (int)uVar8);
    (**(code **)(*param_1 + 0x278))(param_1,(int)uVar8 << 0xb,iVar10 << 0xb);
LAB_1003ed67e:
    if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar9 = 0x52100;
LAB_1003ed453:
                    /* WARNING: Could not recover jumptable at 0x0001003ed464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar9);
  return;
}

