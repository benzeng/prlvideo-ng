
undefined8 FUN_100225cf0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t access vm desktop instance");
    uVar2 = 0x80000009;
  }
  else {
    lVar1 = FUN_10031b110();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = 0;
      (**(code **)(*param_1 + 0x98))(param_1,0);
    }
  }
  return uVar2;
}

