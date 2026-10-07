
int FUN_10089d300(code *param_1,long *param_2,long *param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  void *ptr;
  void *ptr_00;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_6c;
  void *local_68;
  undefined1 local_60 [48];
  
  local_6c = 0;
  FUN_10088a650(local_60);
  if (param_2 == (long *)0x0) {
LAB_10089d3a7:
    if (param_3 == (long *)0x0) {
LAB_10089d41a:
      uVar1 = (*param_1)(param_5,0);
      ptr = (void *)FUN_10081ddd0(uVar1,"a_sign.c",0xae);
      iVar2 = FUN_100891d80(param_6);
      local_6c = iVar2;
      ptr_00 = (void *)FUN_10081ddd0(iVar2,"a_sign.c",0xb0);
      if ((ptr == (void *)0x0) || (ptr_00 == (void *)0x0)) {
        local_6c = 0;
        FUN_100887ce0(0xd,0x80,0x41,"a_sign.c",0xb3);
      }
      else {
        local_68 = ptr;
        (*param_1)(param_5,&local_68);
        iVar3 = FUN_10088a720(local_60,param_7,0);
        if (((iVar3 == 0) || (iVar3 = FUN_10088a910(local_60,ptr,(long)(int)uVar1), iVar3 == 0)) ||
           (iVar3 = FUN_100891930(local_60,ptr_00,&local_6c,param_6), iVar3 == 0)) {
          local_6c = 0;
          FUN_100887ce0(0xd,0x80,6,"a_sign.c",0xbe);
        }
        else {
          if (*(long *)(param_4 + 2) != 0) {
            FUN_10081e1a0();
          }
          *(void **)(param_4 + 2) = ptr_00;
          *param_4 = local_6c;
          *(ulong *)(param_4 + 4) = *(ulong *)(param_4 + 4) & 0xfffffffffffffff0 | 8;
          ptr_00 = (void *)0x0;
        }
      }
      FUN_10088aa50(local_60);
      if (ptr != (void *)0x0) {
        _OPENSSL_cleanse(ptr,(ulong)uVar1);
        FUN_10081e1a0(ptr);
      }
      if (ptr_00 != (void *)0x0) {
        _OPENSSL_cleanse(ptr_00,(long)iVar2);
        FUN_10081e1a0(ptr_00);
      }
      return local_6c;
    }
    if (*(int *)(param_7 + 4) == 0x71) {
      FUN_1008a89a0();
      param_3[1] = 0;
    }
    else if (((int *)param_3[1] == (int *)0x0) || (*(int *)param_3[1] != 5)) {
      FUN_1008a89a0();
      puVar5 = (undefined4 *)FUN_1008a8980();
      param_3[1] = (long)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_10089d544;
      *puVar5 = 5;
    }
    FUN_100899890(*param_3);
    lVar4 = FUN_100821870(*(undefined4 *)(param_7 + 4));
    *param_3 = lVar4;
    if (lVar4 == 0) goto LAB_10089d505;
    if (*(int *)(lVar4 + 0x14) != 0) goto LAB_10089d41a;
LAB_10089d523:
    uVar6 = 0x9a;
    uVar7 = 0xa9;
  }
  else {
    if (*(int *)(param_7 + 4) == 0x71) {
      FUN_1008a89a0();
      param_2[1] = 0;
    }
    else if (((int *)param_2[1] == (int *)0x0) || (*(int *)param_2[1] != 5)) {
      FUN_1008a89a0();
      puVar5 = (undefined4 *)FUN_1008a8980();
      param_2[1] = (long)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_10089d544;
      *puVar5 = 5;
    }
    FUN_100899890(*param_2);
    lVar4 = FUN_100821870(*(undefined4 *)(param_7 + 4));
    *param_2 = lVar4;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x14) != 0) goto LAB_10089d3a7;
      goto LAB_10089d523;
    }
LAB_10089d505:
    uVar6 = 0xa2;
    uVar7 = 0xa4;
  }
  FUN_100887ce0(0xd,0x80,uVar6,"a_sign.c",uVar7);
LAB_10089d544:
  FUN_10088aa50(local_60);
  return local_6c;
}

