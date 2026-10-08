
long * FUN_100adbc50(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  *param_1 = (long)PTR_shared_null_1021e15e8;
  uVar5 = 0;
  do {
    for (puVar4 = *(undefined8 **)(param_2 + uVar5 * 8); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 != *(int *)(lVar2 + 0xc)) {
        puVar3 = (undefined8 *)(lVar2 + 0x10 + (long)iVar1 * 8);
        lVar2 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          if ((((int *)*puVar3)[1] == *(int *)((long)puVar4 + 0x3c)) &&
             (*(int *)*puVar3 == *(int *)(puVar4 + 7))) goto LAB_100adbc80;
          puVar3 = puVar3 + 1;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      FUN_1000aaa10(param_1,puVar4 + 7);
LAB_100adbc80:
    }
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      return param_1;
    }
  } while( true );
}

