
undefined1 FUN_10054f070(long param_1,long param_2,long *param_3,int *param_4,void *param_5)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar9) {
    *param_3 = -1;
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 8);
  *param_3 = (ulong)*(uint *)(param_2 + 8) * (ulong)*(uint *)(lVar2 + (ulong)uVar9 * 8);
  iVar4 = *(int *)(lVar2 + 4 + (ulong)uVar9 * 8);
  *param_4 = iVar4;
  if (iVar4 == 0) {
    pcVar8 = "CompressedStorage::get_data_len() zero block size";
  }
  else {
    uVar9 = iVar4 + 0xfffU & 0xfffff000;
    if (*(uint *)(param_2 + 0xc) < uVar9) {
      FUN_1008e3970("","TransMem",0,
                    "CompressedStorage::get_data_len() block size %u doesn\'t fit the buffer size %u"
                    ,uVar9);
      return 0;
    }
    if (uVar9 == 0) {
      return 0;
    }
    pvVar5 = (void *)FUN_10054f360(param_1,uVar1,uVar9,1);
    if (pvVar5 == (void *)0x0) {
      pcVar8 = "CCompressedFileMapped::get_data() failed";
    }
    else {
      puVar6 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
      if ((int *)*puVar6 != (int *)0x0) {
        iVar4 = _sigsetjmp((int *)*puVar6,1);
        if (iVar4 != 0) {
          pcVar8 = "CCompressedFileMapped::get_data() cancelled by exception";
          goto LAB_10054f11e;
        }
        plVar7 = (long *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
        if (*plVar7 != 0) {
          *(undefined1 *)(*plVar7 + 0x2b1) = 1;
        }
      }
      _memcpy(param_5,pvVar5,(ulong)uVar9);
      plVar7 = (long *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
      if (*plVar7 != 0) {
        *(undefined1 *)(*plVar7 + 0x2b1) = 0;
      }
      if ((*(code **)(param_1 + 0x60) == (code *)0x0) ||
         (cVar3 = (**(code **)(param_1 + 0x60))
                            (*(undefined8 *)(param_1 + 0x68),param_5,uVar9,*param_3,0),
         cVar3 != '\0')) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar9;
        return 1;
      }
      pcVar8 = "CCompressedFileMapped::get_data() cancelled";
    }
  }
LAB_10054f11e:
  FUN_1008e3970("","TransMem",0,pcVar8);
  return 0;
}

