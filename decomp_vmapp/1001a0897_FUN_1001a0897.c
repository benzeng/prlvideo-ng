
void FUN_1001a0897(undefined8 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x12) == 0) {
      _fwrite("DOCUMENT == NULL !\n",1,0x13,(FILE *)*param_1);
    }
  }
  else {
    param_1[0x10] = param_2;
    switch(*(undefined4 *)(param_2 + 8)) {
    default:
      FUN_10019e54c(param_1,0x1393,"Unknown node type %d\n",*(undefined4 *)(param_2 + 8));
      break;
    case 1:
      FUN_10019e49b(param_1,5000,"Misplaced ELEMENT node\n");
      break;
    case 2:
      FUN_10019e49b(param_1,0x1389,"Misplaced ATTRIBUTE node\n");
      break;
    case 3:
      FUN_10019e49b(param_1,0x138a,"Misplaced TEXT node\n");
      break;
    case 4:
      FUN_10019e49b(param_1,0x138b,"Misplaced CDATA node\n");
      break;
    case 5:
      FUN_10019e49b(param_1,0x138c,"Misplaced ENTITYREF node\n");
      break;
    case 6:
      FUN_10019e49b(param_1,0x138d,"Misplaced ENTITY node\n");
      break;
    case 7:
      FUN_10019e49b(param_1,0x138e,"Misplaced PI node\n");
      break;
    case 8:
      FUN_10019e49b(param_1,0x138f,"Misplaced COMMENT node\n");
      break;
    case 9:
      if (*(int *)(param_1 + 0x12) == 0) {
        _fwrite("DOCUMENT\n",1,9,(FILE *)*param_1);
      }
      break;
    case 10:
      FUN_10019e49b(param_1,0x1390,"Misplaced DOCTYPE node\n");
      break;
    case 0xb:
      FUN_10019e49b(param_1,0x1391,"Misplaced FRAGMENT node\n");
      break;
    case 0xc:
      FUN_10019e49b(param_1,0x1392,"Misplaced NOTATION node\n");
      break;
    case 0xd:
      if (*(int *)(param_1 + 0x12) == 0) {
        _fwrite("HTML DOCUMENT\n",1,0xe,(FILE *)*param_1);
      }
    }
  }
  return;
}

