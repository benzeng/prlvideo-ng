
int FUN_100c78880(code *param_1,long *param_2,long *param_3,int *param_4,undefined8 param_5,
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
  FUN_100c65850(local_60);
  if (param_2 == (long *)0x0) {
LAB_100c78927:
    if (param_3 == (long *)0x0) {
LAB_100c7899a:
      uVar1 = (*param_1)(param_5,0);
      ptr = (void *)FUN_100bf3540(uVar1,"a_sign.c",0xae);
      iVar2 = FUN_100c6d160(param_6);
      local_6c = iVar2;
      ptr_00 = (void *)FUN_100bf3540(iVar2,"a_sign.c",0xb0);
      if ((ptr == (void *)0x0) || (ptr_00 == (void *)0x0)) {
        local_6c = 0;
        FUN_100c62ee0(0xd,0x80,0x41,"a_sign.c",0xb3);
      }
      else {
        local_68 = ptr;
        (*param_1)(param_5,&local_68);
        iVar3 = FUN_100c65920(local_60,param_7,0);
        if (((iVar3 == 0) || (iVar3 = FUN_100c65b10(local_60,ptr,(long)(int)uVar1), iVar3 == 0)) ||
           (iVar3 = FUN_100c6cd10(local_60,ptr_00,&local_6c,param_6), iVar3 == 0)) {
          local_6c = 0;
          FUN_100c62ee0(0xd,0x80,6,"a_sign.c",0xbe);
        }
        else {
          if (*(long *)(param_4 + 2) != 0) {
            FUN_100bf3910();
          }
          *(void **)(param_4 + 2) = ptr_00;
          *param_4 = local_6c;
          *(ulong *)(param_4 + 4) = *(ulong *)(param_4 + 4) & 0xfffffffffffffff0 | 8;
          ptr_00 = (void *)0x0;
        }
      }
      FUN_100c65c50(local_60);
      if (ptr != (void *)0x0) {
        _OPENSSL_cleanse(ptr,(ulong)uVar1);
        FUN_100bf3910(ptr);
      }
      if (ptr_00 != (void *)0x0) {
        _OPENSSL_cleanse(ptr_00,(long)iVar2);
        FUN_100bf3910(ptr_00);
      }
      return local_6c;
    }
    if (*(int *)(param_7 + 4) == 0x71) {
      FUN_100c83f20();
      param_3[1] = 0;
    }
    else if (((int *)param_3[1] == (int *)0x0) || (*(int *)param_3[1] != 5)) {
      FUN_100c83f20();
      puVar5 = (undefined4 *)FUN_100c83f00();
      param_3[1] = (long)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_100c78ac4;
      *puVar5 = 5;
    }
    FUN_100c74e10(*param_3);
    lVar4 = FUN_100bf6fe0(*(undefined4 *)(param_7 + 4));
    *param_3 = lVar4;
    if (lVar4 == 0) goto LAB_100c78a85;
    if (*(int *)(lVar4 + 0x14) != 0) goto LAB_100c7899a;
LAB_100c78aa3:
    uVar6 = 0x9a;
    uVar7 = 0xa9;
  }
  else {
    if (*(int *)(param_7 + 4) == 0x71) {
      FUN_100c83f20();
      param_2[1] = 0;
    }
    else if (((int *)param_2[1] == (int *)0x0) || (*(int *)param_2[1] != 5)) {
      FUN_100c83f20();
      puVar5 = (undefined4 *)FUN_100c83f00();
      param_2[1] = (long)puVar5;
      if (puVar5 == (undefined4 *)0x0) goto LAB_100c78ac4;
      *puVar5 = 5;
    }
    FUN_100c74e10(*param_2);
    lVar4 = FUN_100bf6fe0(*(undefined4 *)(param_7 + 4));
    *param_2 = lVar4;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x14) != 0) goto LAB_100c78927;
      goto LAB_100c78aa3;
    }
LAB_100c78a85:
    uVar6 = 0xa2;
    uVar7 = 0xa4;
  }
  FUN_100c62ee0(0xd,0x80,uVar6,"a_sign.c",uVar7);
LAB_100c78ac4:
  FUN_100c65c50(local_60);
  return local_6c;
}

