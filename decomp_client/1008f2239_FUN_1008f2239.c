
void FUN_1008f2239(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  xmlChar *pxVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (*(undefined4 *)(param_1 + 2) = param_2, param_1[3] == 0)) {
    ___xmlRaiseError(0,0,0,0,0,0xd,param_2,2,0,0,param_4,0,0,0,0,param_3,param_4);
  }
  else {
    *(undefined4 *)(param_1[3] + 0xe8) = 0xd;
    *(undefined4 *)(param_1[3] + 0xec) = param_2;
    *(undefined4 *)(param_1[3] + 0xf8) = 2;
    lVar1 = param_1[3];
    pxVar2 = _xmlStrdup((xmlChar *)param_1[1]);
    *(xmlChar **)(lVar1 + 0x110) = pxVar2;
    *(int *)(param_1[3] + 0x128) = (int)*param_1 - (int)param_1[1];
    *(undefined8 *)(param_1[3] + 0x138) = *(undefined8 *)(param_1[3] + 0x140);
    if (*(long *)(param_1[3] + 0xe0) == 0) {
      ___xmlRaiseError(0,0,0,0,*(undefined8 *)(param_1[3] + 0x140),0xd,param_2,2,0,0,param_4,
                       param_1[1],0,(int)*param_1 - (int)param_1[1],0,param_3,param_4);
    }
    else {
      (**(code **)(param_1[3] + 0xe0))(*(undefined8 *)(param_1[3] + 0xd8),param_1[3] + 0xe8);
    }
  }
  return;
}

