
undefined4
FUN_1009326c9(undefined8 param_1,int param_2,int *param_3,long *param_4,undefined8 *param_5,
             int *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  int *local_30;
  
  local_30 = param_3;
  do {
    if (local_30 == (int *)0x0) {
      return 0;
    }
    if (*local_30 == 0x10) {
      iVar1 = FUN_1009326c9(param_1,param_2,*(undefined8 *)(local_30 + 0xe),param_4,param_5,param_6)
      ;
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
    else if ((param_2 == 0) && (local_30[0x14] == 0)) {
      FUN_10091c726(param_1,0xc0d,*(undefined8 *)(local_30 + 0x1a),0,
                    "Attribute use prohibitions are pointless when extending a type",0,0,0);
    }
    else {
      puVar2 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_10091b97e(param_1,"building attribute uses",0);
        return 0xffffffff;
      }
      puVar2[1] = local_30;
      *puVar2 = 0;
      if (*param_4 == 0) {
        *param_4 = (long)puVar2;
      }
      else {
        *(undefined8 **)*param_5 = puVar2;
      }
      *param_5 = puVar2;
      if (local_30[0x14] == 0) {
        *param_6 = *param_6 + 1;
      }
    }
    local_30 = *(int **)(local_30 + 2);
  } while( true );
}

