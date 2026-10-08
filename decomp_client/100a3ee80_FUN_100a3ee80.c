
undefined8 * FUN_100a3ee80(undefined8 *param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 != 0) {
    iVar6 = 0;
    while( true ) {
      iVar2 = FUN_10015d3a0(lVar5);
      if (iVar2 <= iVar6) break;
      uVar4 = FUN_10015d330(lVar5,iVar6);
      local_40[0] = uVar4;
      iVar2 = FUN_10018f860(uVar4);
      if (iVar2 == 8) {
        uVar3 = FUN_10018a9d0(uVar4);
        cVar1 = (*param_2)(uVar3);
        if (cVar1 != '\0') {
          FUN_10012c6e0(param_1,local_40);
        }
      }
      iVar6 = iVar6 + 1;
    }
  }
  return param_1;
}

