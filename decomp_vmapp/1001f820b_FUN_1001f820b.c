
int FUN_1001f820b(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  xmlNodePtr pxVar5;
  int local_18;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_1001f6f07(param_2);
  }
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(long *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x18);
  *(long *)(*(long *)(param_1 + 0x30) + 0x18) = param_3;
  if ((*(long *)(param_3 + 0x18) != 0) &&
     (iVar4 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x18),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
  pxVar5 = _xmlDocGetRootElement(*(xmlDocPtr *)(param_3 + 0x20));
  local_18 = FUN_1001f7051(param_1,param_2,pxVar5);
  if ((local_18 == 0) && (pxVar5->children != (_xmlNode *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x24);
    local_18 = FUN_1001f73f5(param_1,param_2,pxVar5->children);
    if ((local_18 == 0) && (*(int *)(param_1 + 0x24) != iVar4)) {
      local_18 = *(int *)(param_1 + 0x20);
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  return local_18;
}

