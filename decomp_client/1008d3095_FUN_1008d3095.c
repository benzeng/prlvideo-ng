
void FUN_1008d3095(undefined8 *param_1,long param_2)

{
  FUN_1008d1d39(param_1);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("Entity declaration is NULL\n",1,0x1b,(FILE *)*param_1);
    }
  }
  else if (*(int *)(param_2 + 8) == 0x11) {
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_1008d1dc3(param_1,0x1397,"Entity declaration has no name");
    }
    else if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("ENTITYDECL(",1,0xb,(FILE *)*param_1);
      FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x10));
      _fputc(0x29,(FILE *)*param_1);
    }
    if (*(int *)(param_1 + 0x12) == 0) {
      switch(*(undefined4 *)(param_2 + 0x5c)) {
      case 1:
        _fwrite(", internal\n",1,0xb,(FILE *)*param_1);
        break;
      case 2:
        _fwrite(", external parsed\n",1,0x12,(FILE *)*param_1);
        break;
      case 3:
        _fwrite(", unparsed\n",1,0xb,(FILE *)*param_1);
        break;
      case 4:
        _fwrite(", parameter\n",1,0xc,(FILE *)*param_1);
        break;
      case 5:
        _fwrite(", external parameter\n",1,0x15,(FILE *)*param_1);
        break;
      case 6:
        _fwrite(", predefined\n",1,0xd,(FILE *)*param_1);
      }
      if (*(long *)(param_2 + 0x60) != 0) {
        FUN_1008d1d39(param_1);
        _fprintf((FILE *)*param_1," ExternalID=%s\n",*(undefined8 *)(param_2 + 0x60));
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        FUN_1008d1d39(param_1);
        _fprintf((FILE *)*param_1," SystemID=%s\n",*(undefined8 *)(param_2 + 0x68));
      }
      if (*(long *)(param_2 + 0x78) != 0) {
        FUN_1008d1d39(param_1);
        _fprintf((FILE *)*param_1," URI=%s\n",*(undefined8 *)(param_2 + 0x78));
      }
      if (*(long *)(param_2 + 0x50) != 0) {
        FUN_1008d1d39(param_1);
        _fwrite(" content=",1,9,(FILE *)*param_1);
        FUN_1008d26ae(param_1,*(undefined8 *)(param_2 + 0x50));
        _fputc(10,(FILE *)*param_1);
      }
    }
    FUN_1008d21a2(param_1,param_2);
  }
  else {
    FUN_1008d1dc3(param_1,0x13a2,"Node is not an entity declaration");
  }
  return;
}

