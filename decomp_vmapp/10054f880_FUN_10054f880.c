
undefined8
FUN_10054f880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  undefined1 uVar8;
  ulong uVar9;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = FUN_10054f540(param_1 + 8);
  if (uVar3 == 0) {
    uVar8 = 0;
    goto LAB_10054fa5a;
  }
  if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
     (cVar2 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_5,uVar3,param_3,1)
     , cVar2 != '\0')) {
    uVar9 = (ulong)*(uint *)(param_1 + 0x50);
    if ((uVar9 != 0) && (0x40000 < *(uint *)(param_1 + 0x50) + uVar3)) {
      iVar4 = FUN_100761880(*(undefined8 *)(param_1 + 0x30),FUN_100761810,0,
                            *(undefined8 *)(param_1 + 0x48),uVar9);
      if (iVar4 != *(int *)(param_1 + 0x50)) {
        pcVar7 = "CCompressedFile::put_data() buffered write failed";
        goto LAB_10054fa4f;
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar9 = 0;
    }
    if (uVar3 < 0x40000) {
      pvVar6 = *(void **)(param_1 + 0x48);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = _valloc(0x40000);
        *(void **)(param_1 + 0x48) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          pcVar7 = "CCompressedFile::put_data() failed to allocate buffer";
          goto LAB_10054fa4f;
        }
      }
      _memcpy((void *)(uVar9 + (long)pvVar6),param_5,(ulong)uVar3);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar3;
    }
    else {
      uVar5 = FUN_100761880(*(undefined8 *)(param_1 + 0x30),FUN_100761810,0,param_5,uVar3);
      if (uVar5 != uVar3) {
        pcVar7 = "CCompressedFile::put_data() write failed";
        goto LAB_10054fa4f;
      }
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (ulong)uVar3;
    uVar8 = 1;
  }
  else {
    pcVar7 = "CCompressedFile::put_data() cancelled";
LAB_10054fa4f:
    uVar8 = 0;
    FUN_1008e3970("","TransMem",0,pcVar7);
  }
LAB_10054fa5a:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar8);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

