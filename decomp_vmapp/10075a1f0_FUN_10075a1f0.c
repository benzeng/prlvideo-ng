
undefined1 FUN_10075a1f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = DAT_1011ccb80;
  lVar4 = DAT_1011ccb80[2];
  if (lVar4 == 0) {
    DAT_1011ccb80[1] = param_3;
    puVar1[2] = param_4;
    *puVar1 = param_2;
    lVar3 = DAT_1011ccb80[1];
    lVar4 = DAT_1011ccb80[2];
    pcVar2 = "First range: mem offset is %llx size is %llx ()";
  }
  else {
    lVar3 = DAT_1011ccb80[1];
    if (lVar3 + lVar4 != param_3) {
      FUN_1008e3970("","dbgdump",0,"Couldn\'t add noncontiguos memory range");
      return 0;
    }
    lVar4 = lVar4 + param_4;
    DAT_1011ccb80[2] = lVar4;
    pcVar2 = "Added range: mem offset is %llx size is %llx ()";
  }
  FUN_1008e3970("","dbgdump",0,pcVar2,lVar3,lVar4);
  return 1;
}

