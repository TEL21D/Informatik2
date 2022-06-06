#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <string>
#include <vector>

struct User {
  std::string _username;  // Name des Benutzers
  std::string _town;  // Wohnort des Benutzers
  std::string _unicourse;  // Wohnort des Benutzers
  std::vector<User *> _friends;

  User(std::string name, std::string town, std::string course) : _username{name}, _town{town}, _unicourse{course} {}

  void addFriend(User * user) {
    _friends.push_back(user);
  }

  // Aufgabe 3
  std::vector<std::string> getFriendsStudy();
};

template<typename T>
void print_vector(std::vector<T> const & v) {
  for (auto el : v) { std::cout << el << " "; }
  std::cout << std::endl;
}

#endif