
void FUN_10069fd20(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_100697c10(param_1,param_2 + 1);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  ___bzero(param_1 + 0x301f,0x200);
  puVar2 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[4] = 0;
    FUN_1008e3970("","dimg",0,"No memory for STRUCTURED_INFO at VMDKSparseImage construction");
  }
  else {
    puVar2[1] = 0x100000004;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[7] = param_1;
    *puVar2 = &PTR_FUN_100bccb40;
    param_1[4] = (long)puVar2;
  }
  return;
}

