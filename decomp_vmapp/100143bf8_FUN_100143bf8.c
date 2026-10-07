
void FUN_100143bf8(long param_1,undefined4 param_2,undefined8 param_3)

{
  char *local_10;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    switch(param_2) {
    default:
      local_10 = "Unregistered error message\n";
      break;
    case 1:
      local_10 = "internal error";
      break;
    case 4:
      local_10 = "Document is empty\n";
      break;
    case 5:
      local_10 = "Extra content at the end of the document\n";
      break;
    case 6:
      local_10 = "CharRef: invalid hexadecimal value\n";
      break;
    case 7:
      local_10 = "CharRef: invalid decimal value\n";
      break;
    case 8:
      local_10 = "CharRef: invalid value\n";
      break;
    case 0x12:
      local_10 = "PEReference at end of document\n";
      break;
    case 0x13:
      local_10 = "PEReference in prolog\n";
      break;
    case 0x14:
      local_10 = "PEReference in epilog\n";
      break;
    case 0x15:
      local_10 = "PEReference: forbidden within markup decl in internal subset\n";
      break;
    case 0x17:
      local_10 = "EntityRef: expecting \';\'\n";
      break;
    case 0x18:
      local_10 = "PEReference: no name\n";
      break;
    case 0x19:
      local_10 = "PEReference: expecting \';\'\n";
      break;
    case 0x21:
      local_10 = "String not started expecting \' or \"\n";
      break;
    case 0x22:
      local_10 = "String not closed expecting \" or \'\n";
      break;
    case 0x24:
      local_10 = "EntityValue: \" or \' expected\n";
      break;
    case 0x25:
      local_10 = "EntityValue: \" or \' expected\n";
      break;
    case 0x26:
      local_10 = "Unescaped \'<\' not allowed in attributes values\n";
      break;
    case 0x27:
      local_10 = "AttValue: \" or \' expected\n";
      break;
    case 0x2b:
      local_10 = "SystemLiteral \" or \' expected\n";
      break;
    case 0x2c:
      local_10 = "Unfinished System or Public ID \" or \' expected\n";
      break;
    case 0x2e:
      local_10 = "xmlParsePI : no target name\n";
      break;
    case 0x30:
      local_10 = "NOTATION: Name expected here\n";
      break;
    case 0x31:
      local_10 = "\'>\' required to close NOTATION declaration\n";
      break;
    case 0x32:
      local_10 = "\'(\' required to start ATTLIST enumeration\n";
      break;
    case 0x33:
      local_10 = "\')\' required to finish ATTLIST enumeration\n";
      break;
    case 0x34:
      local_10 = "MixedContentDecl : \'|\' or \')*\' expected\n";
      break;
    case 0x36:
      local_10 = "ContentDecl : Name or \'(\' expected\n";
      break;
    case 0x37:
      local_10 = "ContentDecl : \',\' \'|\' or \')\' expected\n";
      break;
    case 0x38:
      local_10 = "Text declaration \'<?xml\' required\n";
      break;
    case 0x39:
      local_10 = "parsing XML declaration: \'?>\' expected\n";
      break;
    case 0x3b:
      local_10 = "XML conditional section not closed\n";
      break;
    case 0x3c:
      local_10 = "Content error in the external subset\n";
      break;
    case 0x3d:
      local_10 = "DOCTYPE improperly terminated\n";
      break;
    case 0x3e:
      local_10 = "Sequence \']]>\' not allowed in content\n";
      break;
    case 0x40:
      local_10 = "Invalid PI name\n";
      break;
    case 0x43:
      local_10 = "NmToken expected in ATTLIST enumeration\n";
      break;
    case 0x45:
      local_10 = "MixedContentDecl : \'#PCDATA\' expected\n";
      break;
    case 0x46:
      local_10 = "SYSTEM or PUBLIC, the URI is missing\n";
      break;
    case 0x47:
      local_10 = "PUBLIC, the Public Identifier is missing\n";
      break;
    case 0x49:
      local_10 = "expected \'>\'\n";
      break;
    case 0x4a:
      local_10 = "EndTag: \'</\' not found\n";
      break;
    case 0x4b:
      local_10 = "expected \'=\'\n";
      break;
    case 0x4e:
      local_10 = "standalone accepts only \'yes\' or \'no\'\n";
      break;
    case 0x4f:
      local_10 = "Invalid XML encoding name\n";
      break;
    case 0x50:
      local_10 = "Comment must not contain \'--\' (double-hyphen)\n";
      break;
    case 0x52:
      local_10 = "external parsed entities cannot be standalone\n";
      break;
    case 0x53:
      local_10 = "XML conditional section \'[\' expected\n";
      break;
    case 0x54:
      local_10 = "Entity value required\n";
      break;
    case 0x55:
      local_10 = "chunk is not well balanced\n";
      break;
    case 0x56:
      local_10 = "extra content at the end of well balanced chunk\n";
      break;
    case 0x58:
      local_10 = "PEReferences forbidden in internal subset\n";
      break;
    case 0x59:
      local_10 = "Detected an entity reference loop\n";
      break;
    case 0x5c:
      local_10 = "Fragment not allowed";
      break;
    case 0x5f:
      local_10 = "conditional section INCLUDE or IGNORE keyword expected\n";
      break;
    case 0x60:
      local_10 = "Malformed declaration expecting version\n";
    }
    *(undefined4 *)(param_1 + 0x88) = param_2;
    ___xmlRaiseError(0,0,0,param_1,0,1,param_2,3,0,0,param_3,0,0,0,0,local_10,param_3);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
  }
  return;
}

