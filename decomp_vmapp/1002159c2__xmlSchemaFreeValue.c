
void _xmlSchemaFreeValue(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_20;
  
  local_20 = param_1;
  while (local_20 != (undefined4 *)0x0) {
    switch(*local_20) {
    case 1:
    case 2:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1d:
    case 0x2e:
      if (*(long *)(local_20 + 4) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 4));
      }
      break;
    case 0x15:
    case 0x1c:
      if (*(long *)(local_20 + 6) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 6));
      }
      if (*(long *)(local_20 + 4) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 4));
      }
      break;
    case 0x2b:
      if (*(long *)(local_20 + 4) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 4));
      }
      break;
    case 0x2c:
      if (*(long *)(local_20 + 4) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 4));
      }
    }
    puVar1 = *(undefined4 **)(local_20 + 2);
    (*(code *)_xmlFree)(local_20);
    local_20 = puVar1;
  }
  return;
}

