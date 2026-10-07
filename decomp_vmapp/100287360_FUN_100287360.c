
void FUN_100287360(long *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x8c) == '\x01') {
    *(long *)(param_1[0x7426] + 0xf0) = *(long *)(param_1[0x7426] + 0xf0) + 1;
    (**(code **)(*param_1 + 200))(param_1);
    if ((long *)param_1[0x7418] != param_1 + 0x7418) {
      FUN_100287530(param_1);
    }
    if ((long *)param_1[0x741e] != param_1 + 0x741e) {
      FUN_100287660(param_1);
    }
    FUN_100287770(param_1);
    if (param_1[0x7415] != 0) {
      cVar1 = FUN_10028dcb0(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1002878f0(param_1,param_1[0x7415]);
        if (cVar1 == '\0') {
          FUN_100287ac0(param_1,param_1[0x7415]);
        }
        else {
          FUN_100287ba0();
        }
        param_1[0x7415] = 0;
      }
    }
  }
  else if ((((long *)param_1[0x741a] != param_1 + 0x741a) ||
           ((long *)param_1[0x741c] != param_1 + 0x741c)) || (param_1[0x7415] != 0)) {
    FUN_1008e3970("","LocalDevices",0,"[LSI] Dropping activity for %u",(int)param_1[0x12]);
    return;
  }
  return;
}

