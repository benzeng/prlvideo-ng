
int FUN_100692e80(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  iVar1 = (**(code **)(*param_1 + 0x198))(param_1,2,&local_24,&local_28,&local_2c,&local_30,param_2)
  ;
  if (iVar1 < 0) {
    FUN_1008e3970("","dimg",0,"Error at checking disk consistency");
  }
  else {
    FUN_1008e3970("","dimg",0,"Check consistency finished");
    FUN_1008e3970("","dimg",0,"\tDupBlocksCnt:\t\t%u",local_24);
    FUN_1008e3970("","dimg",0,"\tCorruptBlocksCnt:\t%u",local_28);
    FUN_1008e3970("","dimg",0,"\tUnrefBlocksCnt:\t\t%u",local_2c);
    FUN_1008e3970("","dimg",0,"\tOutOfDiskBlocksCnt:\t%u",local_30);
  }
  return iVar1;
}

