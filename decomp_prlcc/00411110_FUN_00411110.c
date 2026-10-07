
undefined8 * FUN_00411110(undefined8 param_1)

{
  undefined *puVar1;
  void *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  __s = malloc(0x120);
  puVar2 = memset(__s,0,0x120);
  *puVar2 = param_1;
  puVar2[10] = puVar2;
  *(undefined1 *)((long)puVar2 + 0x9a) = 0;
  puVar2[2] = &DAT_0041913e;
  puVar3 = malloc(0x58);
  *puVar3 = PTR_DAT_0061d020;
  puVar3[1] = PTR_s___60__0061d028;
  puVar3[2] = PTR_DAT_0061d030;
  puVar3[3] = PTR_s___62__0061d038;
  puVar3[4] = PTR_s_quot__0061d040;
  puVar3[5] = PTR_s___34__0061d048;
  puVar3[6] = PTR_s_apos__0061d050;
  puVar3[7] = PTR_s___39__0061d058;
  puVar3[8] = PTR_DAT_0061d060;
  puVar3[9] = PTR_s___38__0061d068;
  puVar3[10] = DAT_0061d070;
  puVar2[0x10] = puVar3;
  puVar1 = PTR_EZXML_NIL_0061bd80;
  puVar2[1] = PTR_EZXML_NIL_0061bd80;
  puVar2[0x12] = puVar1;
  puVar2[0x11] = puVar1;
  return puVar2;
}

