
void FUN_100109aa0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  bad_alloc *pbVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  sVar2 = _strlen(param_2);
  pvVar3 = (void *)0x0;
  sVar9 = 0;
  lVar8 = 0;
  if (sVar2 != 0) {
    sVar9 = sVar2 * 2;
    pvVar3 = _realloc((void *)0x0,sVar9);
    if (pvVar3 == (void *)0x0) {
      pbVar6 = (bad_alloc *)___cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(pbVar6);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pbVar6,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
    }
    *param_1 = pvVar3;
    param_1[2] = sVar9;
    lVar8 = param_1[1];
  }
  _memcpy((void *)(lVar8 + (long)pvVar3),param_2,sVar2);
  param_1[1] = sVar2;
  uVar7 = sVar2 + 8;
  if (sVar9 < uVar7) {
    pvVar3 = _realloc(pvVar3,uVar7 * 2);
    if (pvVar3 == (void *)0x0) {
      pbVar6 = (bad_alloc *)___cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(pbVar6);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pbVar6,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
    }
    *param_1 = pvVar3;
    param_1[2] = uVar7 * 2;
    sVar2 = param_1[1];
  }
  *(undefined8 *)((long)pvVar3 + sVar2) = 0x5858585858582e;
  param_1[1] = uVar7;
  iVar1 = _mkstemp((char *)*param_1);
  *(int *)(param_1 + 3) = iVar1;
  if (-1 < iVar1) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("CVSRC","vm",3,"File path: \"%s\"",*param_1);
    }
    return;
  }
  piVar4 = ___error();
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("CVSRC","vm",1,"Open file err %i, path=\"%s\"",*piVar4,*param_1);
  }
  puVar5 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar5 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar5,&PTR_vtable_10110d0e0,0);
}

