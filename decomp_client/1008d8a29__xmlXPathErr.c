
void _xmlXPathErr(undefined8 *param_1,int param_2)

{
  long lVar1;
  xmlChar *pxVar2;
  int local_24;
  
  if ((param_2 < 0) || (local_24 = param_2, 0x17 < param_2)) {
    local_24 = 0x17;
  }
  if (param_1 == (undefined8 *)0x0) {
    ___xmlRaiseError(0,0,0,0,0,0xc,local_24 + 0x4b0,2,0,0,0,0,0,0,0,(&PTR_s_Ok_1022792a0)[local_24])
    ;
  }
  else {
    *(int *)(param_1 + 2) = local_24;
    if (param_1[3] == 0) {
      ___xmlRaiseError(0,0,0,0,0,0xc,local_24 + 0x4b0,2,0,0,param_1[1],0,0,
                       (int)*param_1 - (int)param_1[1],0,(&PTR_s_Ok_1022792a0)[local_24]);
    }
    else {
      *(undefined4 *)(param_1[3] + 0xe8) = 0xc;
      *(int *)(param_1[3] + 0xec) = local_24 + 0x4b0;
      *(undefined4 *)(param_1[3] + 0xf8) = 2;
      lVar1 = param_1[3];
      pxVar2 = _xmlStrdup((xmlChar *)param_1[1]);
      *(xmlChar **)(lVar1 + 0x110) = pxVar2;
      *(int *)(param_1[3] + 0x128) = (int)*param_1 - (int)param_1[1];
      *(undefined8 *)(param_1[3] + 0x138) = *(undefined8 *)(param_1[3] + 0x140);
      if (*(long *)(param_1[3] + 0xe0) == 0) {
        ___xmlRaiseError(0,0,0,0,*(undefined8 *)(param_1[3] + 0x140),0xc,local_24 + 0x4b0,2,0,0,
                         param_1[1],0,0,(int)*param_1 - (int)param_1[1],0,
                         (&PTR_s_Ok_1022792a0)[local_24]);
      }
      else {
        (**(code **)(param_1[3] + 0xe0))(*(undefined8 *)(param_1[3] + 0xd8),param_1[3] + 0xe8);
      }
    }
  }
  return;
}

