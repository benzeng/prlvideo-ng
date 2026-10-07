
int FUN_100694000(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  
  uVar10 = (ulong)&stack0xffffffffffffffd0 & 0xfffffffffffff000;
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(long *)(uVar10 - 0x40) = lVar2;
  lVar3 = *param_1;
  iVar8 = -0x7ffdefef;
  if (*(int *)(*(long *)(*(long *)(lVar3 + -0x18) + 0x10 + (long)param_1) + 4) != 0) {
    plVar1 = param_1 + 1;
    *(undefined8 *)(uVar10 - 0x2008) = 0x10069405f;
    ___bzero(plVar1,0x200);
    lVar3 = *(long *)(lVar3 + -0x18);
    uVar9 = *(undefined4 *)(lVar3 + 0x18 + (long)param_1);
    uVar4 = *(undefined8 *)(lVar3 + 0x40 + (long)param_1);
    *(undefined8 *)(uVar10 - 0x2008) = 0x10069407e;
    iVar8 = FUN_100685960(lVar3 + 0x10 + (long)param_1,uVar9,0,uVar4,lVar3 + 8 + (long)param_1);
    if (iVar8 < 0) {
      *(undefined8 *)(uVar10 - 0x2008) = 0x100694135;
      FUN_1008e3970("","dimg",0,"VHD Init: Can\'t open file 0x%x",iVar8);
    }
    else {
      plVar5 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      pcVar6 = *(code **)(*plVar5 + 0x40);
      *(undefined8 *)(uVar10 - 0x2008) = 0x1006940ab;
      cVar7 = (*pcVar6)(plVar5,uVar10 - 0x2000,0x200,0,0);
      if (cVar7 == '\0') {
        pcVar6 = *(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0xb0);
        *(undefined8 *)(uVar10 - 0x2008) = 0x10069414d;
        uVar9 = (*pcVar6)();
        *(undefined8 *)(uVar10 - 0x2008) = 0x10069416e;
        FUN_1008e3970("","dimg",0,"Error reading footer. [%u]",uVar9);
        iVar8 = -0x7ffdefd7;
      }
      else {
        *(undefined8 *)(uVar10 - 0x2008) = 0x1006940cb;
        _memcpy(param_1 + 0x41,(void *)(uVar10 - 0x2000),0x200);
        *(undefined8 *)(uVar10 - 0x2008) = 0x1006940db;
        _memcpy(plVar1,(void *)(uVar10 - 0x2000),0x200);
        if (*plVar1 == 0x78697463656e6f63) {
          pcVar6 = *(code **)(*param_1 + 0x28);
          *(undefined8 *)(uVar10 - 0x2008) = 0x10069418a;
          (*pcVar6)(param_1);
          iVar8 = 0;
          goto LAB_10069418d;
        }
        *(undefined8 *)(uVar10 - 0x2008) = 0x10069410c;
        FUN_1008e3970("","dimg",0,"Error, the cookie in VHD footer is not set");
        iVar8 = -0x7ffdefcd;
      }
      pcVar6 = *(code **)(*param_1 + 0x18);
      *(undefined8 *)(uVar10 - 0x2008) = 0x10069417e;
      (*pcVar6)(param_1);
    }
  }
LAB_10069418d:
  if (lVar2 == *(long *)(uVar10 - 0x40)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar10 - 0x2008) = &UNK_1006941ae;
  ___stack_chk_fail();
}

