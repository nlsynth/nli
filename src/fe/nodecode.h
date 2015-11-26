// -*- C++ -*-
#ifndef _fe_nodecode_h_
#define _fe_nodecode_h_

namespace fe {

enum NodeCode {
  EXPR_SYM,
  EXPR_NUM,
  EXPR_STR,
  EXPR_ELM_REF,
  EXPR_FUNCALL,
  EXPR_TRI_TERM,
  EXPR_BIT_RANGE,
  BINOP_COMMA,
  BINOP_ADD,
  BINOP_SUB,
  BINOP_ASSIGN,
  BINOP_LT,
  BINOP_GT,
  BINOP_LTE,
  BINOP_GTE,
  BINOP_EQ,
  BINOP_NE,
  BINOP_AND,
  BINOP_OR,
  BINOP_XOR,
  BINOP_LSHIFT,
  BINOP_RSHIFT,
  BINOP_ADD_ASSIGN,
  BINOP_SUB_ASSIGN,
  BINOP_MUL_ASSIGN,
  BINOP_DIV_ASSIGN,
  BINOP_MOD_ASSIGN,
  BINOP_LSHIFT_ASSIGN,
  BINOP_RSHIFT_ASSIGN,
  BINOP_AND_ASSIGN,
  BINOP_XOR_ASSIGN,
  BINOP_OR_ASSIGN,
  BINOP_MUL,
  BINOP_LAND,
  BINOP_LOR,
  BINOP_CONCAT,
  BINOP_ARRAY_REF,
  UNIOP_PLUS,
  UNIOP_MINUS,
  UNIOP_POST_INC,
  UNIOP_PRE_INC,
  UNIOP_POST_DEC,
  UNIOP_PRE_DEC,
  UNIOP_REF,
  UNIOP_BIT_INV,
  UNIOP_LOGIC_INV,
  STMT_EXPR,
  STMT_VARDECL,
  STMT_FUNCDECL,
  STMT_TRANSITION,
  STMT_IF,
  STMT_RETURN,
  STMT_LABEL,
  STMT_GOTO,
  STMT_IMPORT,
  STMT_SPAWN,
  STMT_RETURN_TYPE,
  STMT_PUSH_BINDING,
  STMT_POP_BINDING,
  STMT_THREAD_DECL,
  STMT_CHANNEL_DECL,
  STMT_ENUM_DECL,
};

const char *NodeName(enum NodeCode node);
bool IsBinOpNode(enum NodeCode node);

}  // namespace fe

#endif  // _fe_nodecode_h_
