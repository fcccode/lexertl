// sql rules.

#include "stdafx.h"

#include "../lexertl/rules.hpp"
#include "sql.h"

void build_sql (lexertl::rules &rules_)
{
    rules_.insert_macro("D", "[0-9]");
    rules_.insert_macro("E", "[Ee][-+]?{D}+");

    rules_.push("{D}+", eSQL_INTEGER);
    rules_.push("{D}+\\.{D}*{E}?|{D}+{E}", eSQL_REAL);
    rules_.push(":", eSQL_COLON);
    rules_.push(";", eSQL_SEMICOLON);
    rules_.push("\\.\\*", eSQL_ALLFIELDS);
    rules_.push("\\.", eSQL_DOT);
    rules_.push(",", eSQL_COMMA);
    rules_.push("!", eSQL_NOT);
    rules_.push("!=", eSQL_NE);
    rules_.push("<=", eSQL_LE);
    rules_.push(">=", eSQL_GE);
    rules_.push("<", eSQL_LT);
    rules_.push("!<", eSQL_NLT);
    rules_.push(">", eSQL_GT);
    rules_.push("!>", eSQL_NGT);
    rules_.push("\\(", eSQL_OPENPAREN);
    rules_.push("\\)", eSQL_CLOSEPAREN);
    rules_.push(">>", eSQL_RIGHTSHIFT);
    rules_.push("<<", eSQL_LEFTSHIFT);
    rules_.push("\\|", eSQL_OR);
    rules_.push("\\|\\|", eSQL_E_OR);
    rules_.push("^", eSQL_XOR);
    rules_.push("&", eSQL_AND);
    rules_.push("&&", eSQL_E_AND);
    rules_.push("~", eSQL_COMPLEMENT);
    rules_.push("`", eSQL_BACKTICK);
    rules_.push("\\[", eSQL_OPENSQUARE);
    rules_.push("\\]", eSQL_CLOSESQUARE);
    rules_.push("=", eSQL_EQ);
    rules_.push("\\+", eSQL_PLUS);
    rules_.push("-", eSQL_MINUS);
    rules_.push("\\*", eSQL_STAR);
    rules_.push("\\*\\*", eSQL_PWR);
    rules_.push("/", eSQL_DIV);
    rules_.push("%", eSQL_MOD);
    rules_.push("\\?", eSQL_QUESTION);
    rules_.push("ADD", eSQL_ADD);
    rules_.push("ALL", eSQL_ALL);
    rules_.push("ALLOWED", eSQL_ALLOWED);
    rules_.push("AFTER", eSQL_AFTER);
    rules_.push("ALTER", eSQL_ALTER);
    rules_.push("AND", eSQL_AND);
    rules_.push("ANY", eSQL_ANY);
    rules_.push("AS", eSQL_AS);
    rules_.push("ASC", eSQL_ASC);
    rules_.push("AT", eSQL_AT);
    rules_.push("AUDIT", eSQL_AUDIT);
    rules_.push("BEFORE", eSQL_BEFORE);
    rules_.push("BBEGIN", eSQL_BBEGIN);
    rules_.push("BETWEEN", eSQL_BETWEEN);
    rules_.push("BY", eSQL_BY);
    rules_.push("CHECK", eSQL_CHECK);
    rules_.push("CLOSE", eSQL_CLOSE);
    rules_.push("COMMENT", eSQL_COMMENT);
    rules_.push("COMMIT", eSQL_COMMIT);
    rules_.push("COMPOSITE", eSQL_COMPOSITE);
    rules_.push("CONSTRAINT", eSQL_CONSTRAINT);
    rules_.push("CREATE", eSQL_CREATE);
    rules_.push("DATABASE", eSQL_DATABASE);
    rules_.push("DEFAULT", eSQL_DEFAULT);
    rules_.push("DELETE", eSQL_DELETE);
    rules_.push("DESC", eSQL_DESC);
    rules_.push("DISTINCT", eSQL_DISTINCT);
    rules_.push("DIVIDEBY", eSQL_DIVIDEBY);
    rules_.push("DOMAIN", eSQL_DOMAIN);
    rules_.push("DROP", eSQL_DROP);
    rules_.push("DUMP", eSQL_DUMP);
    rules_.push("END", eSQL_END);
    rules_.push("ELSE", eSQL_ELSE);
    rules_.push("EXISTS", eSQL_EXISTS);
    rules_.push("FOR", eSQL_FOR);
    rules_.push("FOREIGN", eSQL_FOREIGN);
    rules_.push("FRAGMENT", eSQL_FRAGMENT);
    rules_.push("FROM", eSQL_FROM);
    rules_.push("GRANT", eSQL_GRANT);
    rules_.push("GROUP", eSQL_GROUP);
    rules_.push("HAVING", eSQL_HAVING);
    rules_.push("IDENTIFIES", eSQL_IDENTIFIES);
    rules_.push("IF", eSQL_IF);
    rules_.push("IN", eSQL_IN);
    rules_.push("INDEX", eSQL_INDEX);
    rules_.push("INFO", eSQL_INFO);
    rules_.push("INSERT", eSQL_INSERT);
    rules_.push("INTO", eSQL_INTO);
    rules_.push("INTERSECT", eSQL_INTERSECT);
    rules_.push("IS", eSQL_IS);
    rules_.push("LIKE", eSQL_LIKE);
    rules_.push("LOCK", eSQL_LOCK);
    rules_.push("MINUS", eSQL_MINUS);
    rules_.push("MODE", eSQL_MODE);
    rules_.push("MODIFY", eSQL_MODIFY);
    rules_.push("NOT", eSQL_NOT);
    rules_.push("NULLN", eSQL_NULLN);
    rules_.push("NULLS", eSQL_NULLS);
    rules_.push("OF", eSQL_OF);
    rules_.push("ON", eSQL_ON);
    rules_.push("OPEN ", eSQL_OPEN);
    rules_.push("OPTION ", eSQL_OPTION);
    rules_.push("OR", eSQL_OR);
    rules_.push("ORDER ", eSQL_ORDER);
    rules_.push("OUTER ", eSQL_OUTER);
    rules_.push("PRIMARY ", eSQL_PRIMARY);
    rules_.push("PROGRAM ", eSQL_PROGRAM);
    rules_.push("RANGE", eSQL_RANGE);
    rules_.push("REPAIR", eSQL_REPAIR);
    rules_.push("RESTORE", eSQL_RESTORE);
    rules_.push("REVOKE ", eSQL_REVOKE);
    rules_.push("ROLLBACK ", eSQL_ROLLBACK);
    rules_.push("ROLLFORWARD ", eSQL_ROLLFORWARD);
    rules_.push("SELECT", eSQL_SELECT);
    rules_.push("SET", eSQL_SET);
    rules_.push("SHOW", eSQL_SHOW);
    rules_.push("SNAPSHOT", eSQL_SNAPSHOT);
    rules_.push("START", eSQL_START);
    rules_.push("STORE", eSQL_STORE);
    rules_.push("SYNC", eSQL_SYNC);
    rules_.push("SYNONYM", eSQL_SYNONYM);
    rules_.push("TABLE", eSQL_TABLE);
    rules_.push("THEN", eSQL_THEN);
    rules_.push("TO", eSQL_TO);
    rules_.push("TYPE", eSQL_TYPE);
    rules_.push("VALUES", eSQL_VALUES);
    rules_.push("VIEW", eSQL_VIEW);
    rules_.push("UNION", eSQL_UNION);
    rules_.push("UNIQUE", eSQL_UNIQUE);
    rules_.push("UPDATE", eSQL_UPDATE);
    rules_.push("WHERE", eSQL_WHERE);
    rules_.push("WORK", eSQL_WORK);
    rules_.push("WITH", eSQL_WITH);
    rules_.push("ALLFIELDS", eSQL_ALLFIELDS);
    rules_.push("INTEGER", eSQL_INTEGER);
    rules_.push("ILLEGAL", eSQL_ILLEGAL);
    rules_.push("REAL", eSQL_REAL);
    rules_.push("STRING", eSQL_STRING);
    rules_.push("PARM", eSQL_PARM);
    rules_.push("[a-zA-Z]+", eSQL_ID);
    rules_.push("\\$[a-zA-Z_][a-zA-Z0-9_#@]*", eSQL_PARM);
    rules_.push("[a-zA-Z_][a-zA-Z0-9_#@]*", eSQL_NAME);
    rules_.push("\\\"[^\\\"]*|'[^']*", eSQL_STRING);
    rules_.push("[ \n\t\r]", eSQL_WHITESPACE);
}
