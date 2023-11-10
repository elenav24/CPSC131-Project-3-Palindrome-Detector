// Name: Elena Marquez
// CWID: 885318089
// Email: elena-marquez@csu.fullerton.edu

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TODO: Your code here
		CPSC131::MyStack<char>* stack = new CPSC131::MyStack<char>();
		CPSC131::MyQueue<char>* queue = new CPSC131::MyQueue<char>();

		for (char c : s) {
			if (c > 122 || c < 65) {
				continue;
			}
			c = tolower(c);
			stack->push(c);
			queue->enqueue(c);
		}

		while (!stack->empty()) {
			if (stack->top() != queue->front()) {
				delete stack;
				delete queue;
				return false;
			}
			stack->pop();
			queue->dequeue();
		}
		delete stack;
		delete queue;
		
		return true;
	}
}











