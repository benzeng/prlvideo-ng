
undefined8 FUN_100be9d90(int *param_1,void *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (0x300 < *param_1) {
    if (*(long *)(param_1 + 0x92) != 0) {
      FUN_100bf3910();
      param_1[0x92] = 0;
      param_1[0x93] = 0;
    }
    puVar1 = (undefined2 *)FUN_100bf3540(param_3 + 0x10,"ssl_sess.c",0x43d);
    *(undefined2 **)(param_1 + 0x92) = puVar1;
    if (puVar1 == (undefined2 *)0x0) {
      FUN_100c62ee0(0x14,0x126,0x41,"ssl_sess.c",0x43f);
    }
    else {
      if (param_2 == (void *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
      }
      else {
        *puVar1 = (short)param_3;
        *(undefined2 **)(puVar1 + 4) = puVar1 + 8;
        _memcpy(puVar1 + 8,param_2,(long)param_3);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

